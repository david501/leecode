#include "217.hpp"
#include <gtest/gtest.h>

namespace
{
TEST(containsDuplicateTest, TestcontainsDuplicate)
{
    Solution s;
    vector<int> l{1,2,3,1};
    EXPECT_EQ(s.containsDuplicate(l), true);
}

TEST(containsDuplicateTest, TestcontainsDuplicate_2)
{
    Solution s;
    vector<int> l{1,2,3,4};
    EXPECT_EQ(s.containsDuplicate(l), false);
}

TEST(containsDuplicateTest, TestcontainsDuplicate_3)
{
    Solution s;
    vector<int> l{1,1,1,3,3,4,3,2,4,2};
    EXPECT_EQ(s.containsDuplicate(l), true);
}

} // namespace
