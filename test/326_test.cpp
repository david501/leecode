#include "326.hpp"
#include <gtest/gtest.h>

namespace
{
TEST(isPowerOfThreeTest, TestisPowerOfThree)
{
    Solution s;

    EXPECT_EQ(s.isPowerOfThree(27), true);

    EXPECT_EQ(s.isPowerOfThree(0), false);

    EXPECT_EQ(s.isPowerOfThree(9), true);

    EXPECT_EQ(s.isPowerOfThree(45), false);
}

} // namespace
