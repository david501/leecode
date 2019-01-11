#include "231.hpp"
#include <gtest/gtest.h>

namespace
{
TEST(isPowerOfTwoTest, TestisPowerOfTwo)
{
    Solution s;

    EXPECT_EQ(s.isPowerOfTwo(1), true);
    EXPECT_EQ(s.isPowerOfTwo(16), true);
    EXPECT_EQ(s.isPowerOfTwo(218), false);
}

} // namespace