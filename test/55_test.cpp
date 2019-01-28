#include "55.hpp"
#include <gtest/gtest.h>

namespace {
TEST(canJump_Test, Test_canJump) {
  Solution s;

  vector < int> nums{2,3,1,1,4};
  EXPECT_FLOAT_EQ(s.canJump(nums), true);
}

TEST(canJump_Test, Test_canJump_1) {
  Solution s;

  vector<int> nums{3, 2, 1, 0, 4};
  EXPECT_FLOAT_EQ(s.canJump(nums), false);
}
} // namespace
