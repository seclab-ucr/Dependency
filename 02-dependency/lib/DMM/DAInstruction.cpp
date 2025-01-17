/*
 * DAInstruction.cpp
 *
 *  Created on: Feb 28, 2019
 *      Author: yhao
 */

#include "DAInstruction.h"

#include <iostream>

#include "DBasicBlock.h"

namespace dra {

    DAInstruction::DAInstruction() {
        state = CoverKind::outside;
        parent = nullptr;
        address = 0;

    }

    DAInstruction::~DAInstruction() = default;

    void DAInstruction::setState(CoverKind kind) {
        if (kind < state) {
            std::cerr << "error InstASM kind" << "\n";
        }
        state = kind;
    }

    void DAInstruction::update(CoverKind kind, DInput *input) {
        setState(kind);
        if (parent != nullptr) {
            parent->update(kind, input);
        } else {
#if DEBUG_ERR
            std::cerr << "DAInstruction update parent == nullptr trace_pc_address : " << this->Address << "\n";
#endif
        }
    }

    void DAInstruction::setAddr(const std::string& addr) {
        this->Address = addr;
        this->address = std::stoul(addr, nullptr, 16);

    }

} /* namespace dra */
