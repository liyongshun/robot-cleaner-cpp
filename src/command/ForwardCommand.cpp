#include "command/ForwardCommand.h"
#include "Position.h"

namespace
{
    typedef void (Coordinate::*Action)();

    Action forwardAction[] = { &Coordinate::moveUp
                             , &Coordinate::moveRight
                             , &Coordinate::moveDown
                             , &Coordinate::moveLeft};
}

void ForwardCommand::exec(Position& p) const
{
    (p.coordinate.*forwardAction[p.direction])();
}

