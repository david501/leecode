#include "532.hpp"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

namespace
{
TEST(findPairs_Test, Test_findPairs)
{
    Solution s;

    vector<int> l{3, 1, 4, 1, 5};
    EXPECT_EQ(s.findPairs(l, 2), 2);
    EXPECT_EQ(s.findPairs(l, -1), 0);
}

TEST(findPairs_Test, Test_findPairs_2)
{
    Solution s;

    vector<int> l{1, 2, 3, 4, 5};
    EXPECT_EQ(s.findPairs(l, 1), 4);
}

TEST(findPairs_Test, Test_findPairs_3)
{
    Solution s;

    vector<int> l{1, 3, 1, 5, 4};
    EXPECT_EQ(s.findPairs(l, 0), 1);
}

TEST(findPairs_Test, Test_findPairs_4)
{
    Solution s;

    vector<int> l{6, 3, 5, 7, 2, 3, 3, 8, 2, 4};
    EXPECT_EQ(s.findPairs(l, 2), 5);
}

TEST(findPairs_Test, Test_findPairs_5)
{
    Solution s;

    vector<int> l{1, 1, 1, 1, 1};
    EXPECT_EQ(s.findPairs(l, 0), 1);
}

} // namespace
