#include "command/CommandWrap.h"

CommandWrap::CommandWrap(const Command& lsh, const Command& rsh)
	: leftCommand(lsh), rightCommand(rsh)
{
}

void CommandWrap::exec(Position& p) const
{
	leftCommand.exec(p);
	rightCommand.exec(p);
}


