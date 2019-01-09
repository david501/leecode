#include "219.hpp"
#include <gtest/gtest.h>

namespace
{
TEST(containsNearbyDuplicateTest, TestcontainsNearbyDuplicate)
{
    Solution s;
    vector<int> l{1, 2, 3, 1};
    EXPECT_EQ(s.containsNearbyDuplicate(l, 3), true);
}

TEST(containsNearbyDuplicateTest, TestcontainsNearbyDuplicate_2)
{
    Solution s;
    vector<int> l{1, 0, 1, 1};
    EXPECT_EQ(s.containsNearbyDuplicate(l, 1), true);
}

TEST(containsNearbyDuplicateTest, TestcontainsNearbyDuplicate_3)
{
    Solution s;
    vector<int> l{1, 2, 3, 1, 2, 3};
    EXPECT_EQ(s.containsNearbyDuplicate(l, 2), false);
}

} // namespace
