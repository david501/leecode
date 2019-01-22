#include "724.hpp"
#include <gtest/gtest.h>

namespace {
TEST(pivotIndex_Test, Test_pivotIndex) {
  Solution s;

  vector<int> l{1, 7, 3, 6, 5, 6};
  EXPECT_EQ(s.pivotIndex(l), 3);
}

TEST(pivotIndex_Test, Test_pivotIndex_2) {
  Solution s;

  vector<int> l{1, 2, 3};
  EXPECT_EQ(s.pivotIndex(l), -1);
}

} // namespace
