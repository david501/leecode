#include "16.hpp"
#include <gtest/gtest.h>

namespace {
TEST(threeSumClosest_Test, Test_threeSumClosest) {
  Solution s;

  vector<int> nums{-1, 2, 1, -4};
  EXPECT_EQ(s.threeSumClosest(nums, 1), 2);
}

TEST(threeSumClosest_Test, Test_threeSumClosest_2) {
  Solution s;

  vector<int> nums{1, 1, -1, -1, 3};
  EXPECT_EQ(s.threeSumClosest(nums, -1), -1);
}

} // namespace
