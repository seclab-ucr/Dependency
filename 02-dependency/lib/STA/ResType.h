#ifndef _H_RESTYPE
#define _H_RESTYPE

#include <set>
#include <map>
#include <vector>
#include <string>

//Here some types used for static analysis result data exchange.
//They are defined like some SQL DB tables, some primary keys (e.g. taint tag id) are shared acorss tables.

#define TRAIT_INDEX 999

typedef uint64_t ID_TY;

//names for: inst, bb, func, and module
typedef std::vector<std::string> LOC_INF;

//arg no. of the func -> value set that enables to reach the mod inst
//we also reserve some special key numbers to store other kinds of informtion, like mod inst traits (999 -> trait id)
typedef std::map<unsigned, std::set<uint64_t>> CONSTRAINTS;

//mod inst ctx id -> CONSTRAINTS
//callee inst ctx id -> CONSTRAINTS
typedef std::map<ID_TY,CONSTRAINTS> MOD_INF;

//br's ctx_id -> (trait id,set<tag_id> that taints this br)
typedef std::map<ID_TY,std::tuple<ID_TY,std::set<ID_TY>>> BR_INF;

//file path -> func name -> BB names (whose last 'br' is affected by global states) -> BR_INF
typedef std::map<std::string,std::map<std::string,std::map<std::string,BR_INF>>> TAINTED_BR_TY;

//ctx id -> callstack
typedef std::map<ID_TY,std::vector<LOC_INF>> CTX_MAP_TY;

//file path -> func -> BB -> inst -> MOD_INF of this mod inst
typedef std::map<std::string,std::map<std::string,std::map<std::string,std::map<std::string,MOD_INF>>>> MOD_IR_TY;

//The map from taint tags to their mod insts.
//tag id -> file path -> func -> BB -> inst -> MOD_INF of this mod inst
typedef std::map<ID_TY,MOD_IR_TY> TAG_MOD_MAP_TY;

//The constants set.
typedef std::set<int64_t> CONST_INF;

//file path -> func -> BB -> inst -> CONST_INF
//The 4-tuple represents a comparison inst, like "cmp".
typedef std::map<std::string,std::map<std::string,std::map<std::string,std::map<std::string,CONST_INF>>>> IR_CONST_MAP;

//The map recording the constants used in comparison with variables tainted by a certain tag.
//tag id -> IR_CONST_MAP
typedef std::map<ID_TY,IR_CONST_MAP> TAG_CONST_MAP_TY;

//tag id -> info (type, field, is_global, etc) of this tag
typedef std::map<ID_TY,std::map<std::string,std::string>> TAG_INFO_TY;

//pattern name -> numeric value (e.g. ADD -> 1, LT -> 0)
typedef std::map<std::string,int64_t> TRAIT;

//Update(Condition) pattern of a mod(br) instruction for a global state.
typedef std::map<ID_TY,TRAIT> INST_TRAIT_MAP;

//callee name -> MOD_IR_TY of this call inst
typedef std::map<std::string,MOD_IR_TY> CALLEE_MAP_TY;

#endif
