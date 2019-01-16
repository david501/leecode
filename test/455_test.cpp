#include "455.hpp"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

namespace
{
TEST(findContentChildrenTest, TestfindContentChildren)
{
    Solution s;

    vector<int> l1{1, 2, 3};
    vector<int> l2{1, 1};
    EXPECT_EQ(s.findContentChildren(l1, l2), 1);
}

TEST(findContentChildrenTest, TestfindContentChildren_2)
{
    Solution s;

    vector<int> l1{1, 2};
    vector<int> l2{1, 2, 3};
    EXPECT_EQ(s.findContentChildren(l1, l2), 2);
}

} // namespace
