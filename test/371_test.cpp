#include "371.hpp"
#include <gtest/gtest.h>

namespace
{
TEST(getSumTest, TestgetSum)
{
    Solution s;

    EXPECT_EQ(s.getSum(1, 2), 3);
    EXPECT_EQ(s.getSum(-2, 3), 1);
}

} // namespace
