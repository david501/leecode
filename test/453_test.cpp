#include "453.hpp"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

namespace
{
TEST(minMovesTest, TestminMoves)
{
    Solution s;

    vector<int> l1{1, 2, 3};
    EXPECT_EQ(s.minMoves(l1), 3);

    vector<int> l2{1, 1, 2147483647};
    EXPECT_EQ(s.minMoves(l2), 2147483646);

    vector<int> l3{-100, 0, 100};
    EXPECT_EQ(s.minMoves(l3), 300);
}

} // namespace
