#include "18.hpp"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace {
TEST(fourSum_Test, Test_fourSum) {
  Solution s;

  vector<int> nums{};
  auto output = s.fourSum(nums, 0);
  EXPECT_EQ(output.size(), 0);
}

TEST(fourSum_Test, Test_fourSum_1) {
  Solution s;

  vector<int> nums{1, 0, -1, 0, -2, 2};
  auto output = s.fourSum(nums, 0);
  EXPECT_EQ(output.size(), 3);
  ASSERT_THAT(output[0], ::testing::ElementsAre(-2, -1, 1, 2));
  ASSERT_THAT(output[1], ::testing::ElementsAre(-2, 0, 0, 2));
  ASSERT_THAT(output[2], ::testing::ElementsAre(-1, 0, 0, 1));
}

} // namespace
