#include "349.hpp"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

namespace
{
TEST(intersectionTest, Testintersection)
{
    Solution s;
    vector<int> nums1{1, 2, 2, 1};
    vector<int> nums2{2, 2};
    ASSERT_THAT(s.intersection(nums1, nums2), ::testing::ElementsAre(2));
}

TEST(intersectionTest, Testintersection_2)
{
    Solution s;
    vector<int> nums1{4, 9, 5};
    vector<int> nums2{9, 4, 9, 8, 4};
    ASSERT_THAT(s.intersection(nums1, nums2), ::testing::ElementsAre(9, 4));
}

} // namespace
