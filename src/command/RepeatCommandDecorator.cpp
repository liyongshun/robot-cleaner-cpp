#include "command/RepeatCommandDecorator.h"

RepeatCommandDecorator::RepeatCommandDecorator(const Command& cmd, int repeatNum)
	: cmd(cmd), repeatNum(repeatNum)
{
}

void RepeatCommandDecorator::exec(Position& p) const
{
    if(isOutOfBound()) return;

    for(int i = 0; i < repeatNum; ++i)
    {
        cmd.exec(p);
    }
}

bool RepeatCommandDecorator::isOutOfBound() const
{
    return repeatNum < MIN_REPEAT_NUM || repeatNum > MAX_REPEAT_NUM;
}
