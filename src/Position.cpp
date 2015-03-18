#include "Position.h"
#include <iostream>

void Coordinate::moveUp()
{
    y++;
}

void Coordinate::moveDown()
{
    y--;
}

void Coordinate::moveLeft()
{
    x--;
}

void Coordinate::moveRight()
{
    x++;
}

Position::Position(int x, int y, Direction d) : coordinate(x,y), direction(d)
{

}

bool Position::operator==(const Position& rhs) const
{
    return coordinate.x == rhs.coordinate.x &&
           coordinate.y == rhs.coordinate.y &&
           direction == rhs.direction;
}
