#ifndef _INCL_ROBOT_CLEAN_REPEATCOMMANDDECORATOR_H_
#define _INCL_ROBOT_CLEAN_REPEATCOMMANDDECORATOR_H_

#include "command/Command.h"

struct RepeatCommandDecorator : Command
{
    RepeatCommandDecorator(const Command&, const int repeatNum);

    virtual void exec(Position& p) const;

private:
    bool isOutOfBound() const;

private:
    enum { MIN_REPEAT_NUM =1, MAX_REPEAT_NUM = 10 };
    const int repeatNum;
private:
    const Command& cmd;
};

#define REPEAT(Command, n) (RepeatCommandDecorator(Command, n))

#endif /* REPEATCOMMANDDECORATOR_H_ */
