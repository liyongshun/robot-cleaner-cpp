#ifndef _INCL_ROBOT_CLEAN_COMMAND_H_
#define _INCL_ROBOT_CLEAN_COMMAND_H_

#include "base/KeyWords.h"

struct Position;

struct Command
{
    ABSTRACT(void exec(Position& p) const);
    virtual ~Command(){}
};

#endif
