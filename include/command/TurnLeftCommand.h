#ifndef _INCL_ROBOT_CLEAN_TURNLEFTCOMMAND_H_
#define _INCL_ROBOT_CLEAN_TURNLEFTCOMMAND_H_

#include "command/Command.h"
#include "base/Singleton.h"
#include "command/RepeatCommandDecorator.h"

DEFINE_SINGLETON(TurnLeftCommand) EXTENDS(Command)
{
private:
    OVERRIDE(void exec(Position& p) const);
};

#define LEFT TurnLeftCommand::getInstance() 
#define RIGHT REPEAT(LEFT, 3)
#define ROUND REPEAT(LEFT, 2)

#endif
