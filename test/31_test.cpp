#include "31.hpp"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace {

TEST(nextPermutation_Test, Test_nextPermutation) {
  Solution s;

  vector<int> nums{1, 2, 3};
  s.nextPermutation(nums);
  ASSERT_THAT(nums, ::testing::ElementsAre(1, 3, 2));
}

TEST(nextPermutation_Test, Test_nextPermutation_1) {
  Solution s;

  vector<int> nums{3, 2, 1};
  s.nextPermutation(nums);
  ASSERT_THAT(nums, ::testing::ElementsAre(1, 2, 3));
}

TEST(nextPermutation_Test, Test_nextPermutation_2) {
  Solution s;

  vector<int> nums{1, 1, 5};
  s.nextPermutation(nums);
  ASSERT_THAT(nums, ::testing::ElementsAre(1, 5, 1));
}

TEST(nextPermutation_Test, Test_nextPermutation_3) {
  Solution s;

  vector<int> nums{1, 3, 2};
  s.nextPermutation(nums);
  ASSERT_THAT(nums, ::testing::ElementsAre(2, 1, 3));
}

} // namespace
