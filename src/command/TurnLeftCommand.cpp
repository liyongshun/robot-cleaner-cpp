#include "command/TurnLeftCommand.h"
#include "Position.h"

void TurnLeftCommand::exec(Position& p) const
{
    p.direction = static_cast<Direction>( (p.direction+3)%4 );
}
