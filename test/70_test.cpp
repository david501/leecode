#include "70.hpp"
#include <gtest/gtest.h>

TEST(climbStairsTest, Test_climbStairs)
{
    Solution s;

    EXPECT_EQ(s.climbStairs(2), 2);
    EXPECT_EQ(s.climbStairs(3), 3);
    EXPECT_EQ(s.climbStairs(4), 5);
}
