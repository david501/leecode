#include "350.hpp"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

namespace
{
TEST(intersectTest, Testintersect)
{
    Solution s;
    vector<int> nums1{1, 2, 2, 1};
    vector<int> nums2{2, 2};
    ASSERT_THAT(s.intersect(nums1, nums2), ::testing::ElementsAre(2, 2));
}

TEST(intersectTest, Testintersect_2)
{
    Solution s;
    vector<int> nums1{4, 9, 5};
    vector<int> nums2{9, 4, 9, 8, 4};
    ASSERT_THAT(s.intersect(nums1, nums2), ::testing::ElementsAre(9, 4));
}

TEST(intersectTest, Testintersect_3)
{
    Solution s;
    vector<int> nums1{1};
    vector<int> nums2{1};
    ASSERT_THAT(s.intersect(nums1, nums2), ::testing::ElementsAre(1));
}

TEST(intersectTest, Testintersect_4)
{
    Solution s;
    vector<int> nums1{1, 2};
    vector<int> nums2{2, 1};
    ASSERT_THAT(s.intersect(nums1, nums2), ::testing::ElementsAre(2, 1));
}

} // namespace
