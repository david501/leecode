#include "342.hpp"
#include <gtest/gtest.h>

namespace
{
TEST(isPowerOfFourTest, TestisPowerOfFour)
{
    Solution s;

    EXPECT_EQ(s.isPowerOfFour(2), false);

    EXPECT_EQ(s.isPowerOfFour(16), true);

    EXPECT_EQ(s.isPowerOfFour(5), false);

}

} // namespace
