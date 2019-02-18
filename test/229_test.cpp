#include "229.hpp"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace {

TEST(majorityElement_Test, Test_majorityElement) {
  Solution s;

  vector<int> nums = {3, 2, 3};
  ASSERT_THAT(s.majorityElement(nums), ::testing::ElementsAre(3));
}

TEST(majorityElement_Test, Test_majorityElement_1) {
  Solution s;

  vector<int> nums = {1, 1, 1, 3, 3, 2, 2, 2};
  ASSERT_THAT(s.majorityElement(nums), ::testing::ElementsAre(1, 2));
}

} // namespace