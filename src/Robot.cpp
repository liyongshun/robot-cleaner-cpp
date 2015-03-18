#include "Robot.h"
#include "command/Command.h"

Robot::Robot(int x, int y, Direction d) : position(x, y, d)
{
}

const Position& Robot::on(const Command& command)
{
    command.exec(position);

    return position;
}

const Position& Robot::getPosition() const
{
    return position;
}
