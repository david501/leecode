#include "83.hpp"
#include <gtest/gtest.h>

namespace
{
TEST(deleteDuplicatesTest, TestdeleteDuplicates)
{
    Solution s;
    auto l1 = createLists({1, 1, 2});
    auto expected = createLists({1, 2});

    auto result = s.deleteDuplicates(l1);
    EXPECT_TRUE(compareLists(result, expected));
}

TEST(deleteDuplicatesTest, TestdeleteDuplicates_2)
{
    Solution s;
    auto l1 = createLists({1, 1, 2, 3, 3});
    auto expected = createLists({1, 2, 3});

    auto result = s.deleteDuplicates(l1);
    EXPECT_TRUE(compareLists(result, expected));
}

TEST(deleteDuplicatesTest, TestdeleteDuplicates_3)
{
    Solution s;
    auto l1 = createLists({1, 1, 1});
    auto expected = createLists({1});

    auto result = s.deleteDuplicates(l1);
    EXPECT_TRUE(compareLists(result, expected));
}

} // namespace
