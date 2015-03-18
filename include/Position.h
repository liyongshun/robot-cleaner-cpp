#ifndef _INCL_ROBOT_CLEAN_POSITION_H_
#define _INCL_ROBOT_CLEAN_POSITION_H_

enum Direction { N, E, S, W };

struct Coordinate
{
    Coordinate(int x, int y) : x(x), y(y) {}
    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();

    int x;
    int y;
};

struct Position
{
    Position(int x, int y, Direction d);

    bool operator==(const Position& rhs) const;

    Coordinate coordinate;
    Direction direction;
};

#endif
