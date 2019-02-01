#include "75.hpp"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace {
TEST(sortColors_Test, Test_sortColors) {
  Solution s;

  vector<int> nums{2, 0, 2, 1, 1, 0};
  s.sortColors(nums);
  ASSERT_THAT(nums, ::testing::ElementsAre(0, 0, 1, 1, 2, 2));
}

} // namespace