#ifndef _INCL_ROBOT_CLEAN_FORWARDCOMMAND_H_
#define _INCL_ROBOT_CLEAN_FORWARDCOMMAND_H_

#include "command/Command.h"
#include "command/RepeatCommandDecorator.h"
#include "command/CommandWrap.h"
#include "base/Singleton.h"

DEFINE_SINGLETON(ForwardCommand) EXTENDS(Command)
{
private:
    OVERRIDE(void exec(Position& p) const);
};

#define FORWARD_(n) (REPEAT(ForwardCommand::getInstance(), n))
#define FORWARD FORWARD_(1)

#define BACKWARD_(n) (JOIN(ROUND, JOIN(FORWARD_(n), ROUND)))
#define BACKWARD BACKWARD_(1)

#endif
