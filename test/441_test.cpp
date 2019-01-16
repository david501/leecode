#include "441.hpp"
#include <gtest/gtest.h>

namespace
{
TEST(arrangeCoinsTest, TestarrangeCoins)
{
    Solution s;

    EXPECT_EQ(s.arrangeCoins(0), 0);
    EXPECT_EQ(s.arrangeCoins(1), 1);
    EXPECT_EQ(s.arrangeCoins(5), 2);
    EXPECT_EQ(s.arrangeCoins(7), 3);
    EXPECT_EQ(s.arrangeCoins(8), 3);
}

} // namespace
