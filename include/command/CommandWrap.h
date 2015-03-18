#ifndef COMMANDCOMPOSITE_H_
#define COMMANDCOMPOSITE_H_

#include "command/Command.h"

struct CommandWrap : Command
{
	CommandWrap(const Command& lsh, const Command& rsh);

    OVERRIDE(void exec(Position& p) const);

private:
    const Command& leftCommand;
    const Command& rightCommand;
};

#define JOIN(leftCommand, rightCommand) CommandWrap(leftCommand, rightCommand)

#endif /* COMMANDCOMPOSITE_H_ */
