#include "40.hpp"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace {
TEST(combinationSum2_Test, Test_combinationSum2) {
  Solution s;

  vector<int> nums{10, 1, 2, 7, 6, 1, 5};
  auto output = s.combinationSum2(nums, 8);
  EXPECT_EQ(output.size(), 4);
  ASSERT_THAT(output[0], ::testing::ElementsAre(1, 1, 6));
  ASSERT_THAT(output[1], ::testing::ElementsAre(1, 2, 5));
  ASSERT_THAT(output[2], ::testing::ElementsAre(1, 7));
  ASSERT_THAT(output[3], ::testing::ElementsAre(2, 6));
}

TEST(combinationSum2_Test, Test_combinationSum2_1) {
  Solution s;

  vector<int> nums{2, 5, 2, 1, 2};
  auto output = s.combinationSum2(nums, 5);
  EXPECT_EQ(output.size(), 2);
  ASSERT_THAT(output[0], ::testing::ElementsAre(1, 2, 2));
  ASSERT_THAT(output[1], ::testing::ElementsAre(5));
}

} // namespace
