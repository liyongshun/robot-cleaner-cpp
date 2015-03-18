#include "gtest/gtest.h"
#include "Position.h"

TEST(PositionTest, should_init_position_by_coordinate_and_direction)
{
    Position p(0, 0, N);
}

TEST(PositionTest, should_position_eq_given_same_of_coordinate_and_direction)
{
    ASSERT_EQ(Position(0, 0, N), Position(0, 0, N));
}

