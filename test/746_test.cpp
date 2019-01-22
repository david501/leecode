#include "746.hpp"
#include <gtest/gtest.h>

namespace {
TEST(minCostClimbingStairs_Test, Test_minCostClimbingStairs) {
  Solution s;

  vector<int> l{10, 15, 20};
  EXPECT_EQ(s.minCostClimbingStairs(l), 15);
}

TEST(minCostClimbingStairs_Test, Test_minCostClimbingStairs_2) {
  Solution s;

  vector<int> l{1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
  EXPECT_EQ(s.minCostClimbingStairs(l), 6);
}

} // namespace
