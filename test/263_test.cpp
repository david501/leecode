#include "263.hpp"
#include <gtest/gtest.h>

namespace
{
TEST(isUglyTest, TestisUgly)
{
    Solution s;

    EXPECT_EQ(s.isUgly(0), false);
    EXPECT_EQ(s.isUgly(6), true);
    EXPECT_EQ(s.isUgly(8), true);
    EXPECT_EQ(s.isUgly(14), false);
}

} // namespace
