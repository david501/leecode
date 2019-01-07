#include "88.hpp"
#include <gtest/gtest.h>

namespace
{
TEST(mergeTest, Testmerge)
{
    Solution s;
    vector<int> l1{1, 2, 3, 0, 0, 0};
    vector<int> l2{2, 5, 6};
    vector<int> expected{1, 2, 2, 3, 5, 6};

    s.merge(l1, 3, l2, 3);
    EXPECT_EQ(l1.size(), expected.size());
    for (int i = 0; i < expected.size(); ++i)
        EXPECT_EQ(l1[i], expected[i]);
}

TEST(mergeTest, Testmerge_1)
{
    Solution s;
    vector<int> l1{1, 2, 8, 0, 0, 0};
    vector<int> l2{2, 5, 6};
    vector<int> expected{1, 2, 2, 5, 6, 8};

    s.merge(l1, 3, l2, 3);
    EXPECT_EQ(l1.size(), expected.size());
    for (int i = 0; i < expected.size(); ++i)
        EXPECT_EQ(l1[i], expected[i]);
}

TEST(mergeTest, Testmerge_with_empty_nums2)
{
    Solution s;
    vector<int> l1{1, 2, 3};
    vector<int> l2{3, 5, 6};
    vector<int> expected{1, 2, 3};

    s.merge(l1, 3, l2, 0);
    EXPECT_EQ(l1.size(), expected.size());
    for (int i = 0; i < expected.size(); ++i)
        EXPECT_EQ(l1[i], expected[i]);
}

TEST(mergeTest, Testmerge_with_empty_nums1)
{
    Solution s;
    vector<int> l1{0, 0, 0};
    vector<int> l2{3, 5, 6};
    vector<int> expected{3, 5, 6};

    s.merge(l1, 0, l2, 3);
    EXPECT_EQ(l1.size(), expected.size());
    for (int i = 0; i < expected.size(); ++i)
        EXPECT_EQ(l1[i], expected[i]);
}

} // namespace
