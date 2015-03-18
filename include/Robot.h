#ifndef _INCL_ROBOT_CLEAN_ROBOT_H_
#define _INCL_ROBOT_CLEAN_ROBOT_H_

#include "Position.h"
#include <vector>

struct Command;

struct Robot
{
    Robot(int x, int y, Direction d);

    const Position& on(const Command&);
    const Position& getPosition() const;

private:
    Position position;
};
#endif
