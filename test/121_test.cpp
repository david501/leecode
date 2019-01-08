#include "121.hpp"
#include <gtest/gtest.h>

namespace
{
TEST(maxProfitTest, TestmaxProfit)
{
    Solution s;
    vector<int> l1{7,1,5,3,6,4};

    EXPECT_EQ(s.maxProfit(l1), 5);
}

TEST(maxProfitTest, TestmaxProfit_2)
{
    Solution s;
    vector<int> l1{7,6,4,3,1};

    EXPECT_EQ(s.maxProfit(l1), 0);
}

} // namespace
