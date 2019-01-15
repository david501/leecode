#include "414.hpp"
#include <gtest/gtest.h>

namespace
{
TEST(thirdMaxTest, TestthirdMax)
{
    Solution s;
    vector<int> l{1, 2, 3};
    EXPECT_EQ(s.thirdMax(l), 1);

    vector<int> l2{1, 2};
    EXPECT_EQ(s.thirdMax(l2), 2);

    vector<int> l3{2, 2, 3, 1};
    EXPECT_EQ(s.thirdMax(l3), 1);
}

} // namespace
