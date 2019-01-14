#include "367.hpp"
#include <gtest/gtest.h>

namespace
{
TEST(isPerfectSquareTest, TestisPerfectSquare)
{
    Solution s;

    EXPECT_EQ(s.isPerfectSquare(0), true);
    EXPECT_EQ(s.isPerfectSquare(1), true);
    EXPECT_EQ(s.isPerfectSquare(16), true);
    EXPECT_EQ(s.isPerfectSquare(25), true);
}

TEST(isPerfectSquareTest, TestisPerfectSquare_1)
{
    Solution s;

    EXPECT_EQ(s.isPerfectSquare(-25), false);
    EXPECT_EQ(s.isPerfectSquare(14), false);
    EXPECT_EQ(s.isPerfectSquare(24), false);
}

} // namespace
