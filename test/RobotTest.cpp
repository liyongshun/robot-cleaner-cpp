#include "gtest/gtest.h"
#include "Robot.h"
#include "command/TurnLeftCommand.h"
#include "command/ForwardCommand.h"
#include "command/CommandWrap.h"

TEST(RobotTest, robot_should_init_at_0_0_N_given_a_position)
{
    Robot robot(0, 0, N);
    ASSERT_TRUE(robot.getPosition() == Position(0, 0, N));
}

 TEST(RobotTest, robot_should_turn_left_when_receive_LEFT_command)
 {
     ASSERT_TRUE(Position(0,0,W) == Robot(0, 0, N).on(LEFT));
 }

 TEST(RobotTest, robot_should_turn_left_when_receive_RIGHT_command)
 {
     ASSERT_TRUE(Position(0,0,E) == Robot(0, 0, N).on(RIGHT));
 }

 TEST(RobotTest, should_position_forward_a_step_direction_is_N)
 {
     ASSERT_TRUE(Position(0, 1, N) == Robot(0, 0, N).on(FORWARD));
 }

 TEST(RobotTest, should_position_backward_a_step_direction_is_N)
 {
     ASSERT_TRUE(Position(0, -1, N) == Robot(0, 0, N).on(BACKWARD));
 }

 TEST(RobotTest, should_position_forward_a_step_direction_is_E)
 {
     ASSERT_TRUE(Position(1, 0, E) == Robot(0, 0, E).on(FORWARD));
 }

 TEST(RobotTest, should_position_backward_a_step_direction_is_E)
 {
     ASSERT_TRUE(Position(-1, 0, E) == Robot(0, 0, E).on(BACKWARD));
 }

 TEST(RobotTest, should_position_forward_a_step_direction_is_S)
 {
     ASSERT_TRUE(Position(0, -1, S) == Robot(0, 0, S).on(FORWARD));
 }

 TEST(RobotTest, should_position_backward_a_step_direction_is_S)
 {
     ASSERT_TRUE(Position(0, 1, S) == Robot(0, 0, S).on(BACKWARD));
 }

 TEST(RobotTest, should_position_forward_a_step_direction_is_W)
 {
     ASSERT_TRUE(Position(-1, 0, W) == Robot(0, 0, W).on(FORWARD));
 }

 TEST(RobotTest, should_position_backward_a_step_direction_is_W)
 {
     ASSERT_TRUE(Position(1, 0, W) == Robot(0, 0, W).on(BACKWARD));
 }

 TEST(RobotTest, should_robot_turn_round)
 {
     ASSERT_TRUE(Position(0, 0, S) == Robot(0, 0, N).on(ROUND));
 }

 //////////////////////////////////////////////////////////
 TEST(RobotTest, should_forward_1_step_given_FORWARD_1)
 {
     ASSERT_TRUE(Position(2, 0, E) == Robot(1, 0, E).on(FORWARD_(1)));
 }

 TEST(RobotTest, should_forward_10_step_given_FORWARD_10)
 {
     ASSERT_TRUE(Position(1, 10, N) == Robot(1, 0, N).on(FORWARD_(10)));
 }

 TEST(RobotTest, should_robot_stay_original_position_when_forward_repeat_num_less_than_1)
 {
     ASSERT_TRUE(Position(1, 0, E) == Robot(1, 0, E).on(FORWARD_(0)));
 }

 TEST(RobotTest, should_robot_stay_original_position_when_forward_repeat_num_more_than_10)
 {
     ASSERT_TRUE(Position(1, 0, E) == Robot(1, 0, E).on(FORWARD_(11)));
 }

TEST(RobotTest, should_backward_1_step_given_BACKWARD_1)
{
    ASSERT_TRUE(Position(0, 0, E) == Robot(1, 0, E).on(BACKWARD_(1)));
}
TEST(RobotTest, should_backward_10_step_given_BACKWARD_10)
{
    ASSERT_TRUE(Position(1, -10, N) == Robot(1, 0, N).on(BACKWARD_(10)));
}

TEST(RobotTest, should_robot_stay_original_position_when_backward_repeat_num_less_than_1)
{
    ASSERT_TRUE(Position(1, 0, E) == Robot(1, 0, E).on(BACKWARD_(0)));
}

TEST(RobotTest, should_robot_stay_original_position_when_backward_repeat_num_more_than_10)
{
    ASSERT_TRUE(Position(1, 0, E) == Robot(1, 0, E).on(BACKWARD_(11)));
}

TEST(RobotTest, should_robot_move_to_0_0_N_given_composite_command)
{
  ASSERT_TRUE(Position(0, 0, N) == Robot(2, 2, N).on( JOIN(LEFT
		                                            , JOIN(FORWARD_(2)
		                                            , JOIN(RIGHT, BACKWARD_(2))))));
}

TEST(RobotTest, should_point_to_S_given_LEFT_REPEAT_2)
{
  ASSERT_TRUE(Position(0, 0, N) == Robot(0, 0, S).on(REPEAT(LEFT, 2)));
}

TEST(RobotTest, should_point_to_W_given_FOWARD_N_2_REPEAT_2)
{
  ASSERT_TRUE(Position(0, 4, N) == Robot(0, 0, N).on(REPEAT(FORWARD_(2), 2)));
}

