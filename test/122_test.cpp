#include "122.hpp"
#include <gtest/gtest.h>

namespace
{
TEST(maxProfitTest, TestmaxProfit)
{
    Solution s;
    vector<int> l1{7, 1, 5, 3, 6, 4};

    EXPECT_EQ(s.maxProfit(l1), 7);
}

TEST(maxProfitTest, TestmaxProfit_2)
{
    Solution s;
    vector<int> l1{7, 6, 4, 3, 1};

    EXPECT_EQ(s.maxProfit(l1), 0);
}

TEST(maxProfitTest, TestmaxProfit_3)
{
    Solution s;
    vector<int> l1{1, 2, 3, 4, 5};

    EXPECT_EQ(s.maxProfit(l1), 4);
}

} // namespace
