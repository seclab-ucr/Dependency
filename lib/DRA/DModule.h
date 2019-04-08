/*
 * DModule.h
 *
 *  Created on: Feb 28, 2019
 *      Author: yhao
 */

#ifndef LIB_DRA_MODULEALL_H_
#define LIB_DRA_MODULEALL_H_

#include <string>
#include <unordered_map>

#include "DFunction.h"

#define TEST 1
#define DEBUG 1
#define DEBUGBC 0
#define DEBUGOBJDUMP 0
#define DEBUGASM 0

namespace llvm {
class Module;
} /* namespace llvm */

namespace dra {

class DModule {
public:
	DModule();

	virtual ~DModule();

	std::string exec(std::string cmd);

	void ReadObjdump(std::string objdump);

	void ReadAsmSourceCode(std::string AssemblySourceCode);

	void ReadBC(std::string InputFilename);

	void BuildLLVMFunction(llvm::Module *Module);

	void AddRepeatFunction(DFunction *function, FunctionKind kind);

	DFunction *CheckRepeatFunction(std::string Path, std::string FunctionName, FunctionKind kind);

	DFunction *CreatFunction(std::string Path, std::string FunctionName, FunctionKind kind);

public:

	std::unordered_map<std::string, std::unordered_map<std::string, DFunction *>> Function;

	std::unordered_map<std::string, DFunction *> RepeatBCFunction;
	std::unordered_map<std::string, DFunction *> RepeatOFunction;
	std::unordered_map<std::string, std::unordered_map<std::string, DFunction *>> RepeatSFunction;

};

} /* namespace dra */

#endif /* LIB_DRA_MODULEALL_H_ */