#include "15.hpp"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace {
TEST(threeSum_Test, Test_threeSum) {
  Solution s;

  vector<int> nums{};
  auto output = s.threeSum(nums);
  EXPECT_EQ(output.size(), 0);
}

TEST(threeSum_Test, Test_threeSum_1) {
  Solution s;

  vector<int> nums{-1, 0, 1, 2, -1, -4};
  auto output = s.threeSum(nums);
  EXPECT_EQ(output.size(), 2);
  ASSERT_THAT(output[0], ::testing::ElementsAre(-1, -1, 2));
  ASSERT_THAT(output[1], ::testing::ElementsAre(-1, 0, 1));
}

TEST(threeSum_Test, Test_threeSum_2) {
  Solution s;

  vector<int> nums{-1, 0, 1};
  auto output = s.threeSum(nums);
  EXPECT_EQ(output.size(), 1);
  ASSERT_THAT(output[0], ::testing::ElementsAre(-1, 0, 1));
}

TEST(threeSum_Test, Test_threeSum_3) {
  Solution s;

  vector<int> nums{0,0,0};
  auto output = s.threeSum(nums);
  EXPECT_EQ(output.size(), 1);
  ASSERT_THAT(output[0], ::testing::ElementsAre(0,0,0));
}

} // namespace
