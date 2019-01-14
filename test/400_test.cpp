#include "400.hpp"
#include <gtest/gtest.h>

namespace
{
TEST(findNthDigitTest, TestfindNthDigit)
{
    Solution s;

    EXPECT_EQ(s.findNthDigit(10), 1);
    EXPECT_EQ(s.findNthDigit(3), 3);
    EXPECT_EQ(s.findNthDigit(11), 0);
    EXPECT_EQ(s.findNthDigit(1000000000), 1);
    EXPECT_EQ(s.findNthDigit(2147483647), 2);
}

} // namespace
