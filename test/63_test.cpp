#include "63.hpp"
#include <gtest/gtest.h>

namespace {
TEST(uniquePathsWithObstacles_Test, Test_uniquePathsWithObstacles) {
  Solution s;

  vector<vector<int>> ob{{0,0,0},{0,1,0},{0,0,0}};
  EXPECT_EQ(s.uniquePathsWithObstacles(ob), 2);

}

} // namespace