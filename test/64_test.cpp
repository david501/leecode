#include "64.hpp"
#include <gtest/gtest.h>

namespace {
TEST(minPathSum_Test, Test_minPathSum) {
  Solution s;

  vector<vector<int>> ob{{1, 3, 1}, {1, 5, 1}, {4, 2, 1}};
  EXPECT_EQ(s.minPathSum(ob), 7);
}

} // namespace