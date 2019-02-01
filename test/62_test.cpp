#include "62.hpp"
#include <gtest/gtest.h>

namespace {
TEST(uniquePaths_Test, Test_uniquePaths) {
  Solution s;

  EXPECT_EQ(s.uniquePaths(3, 2), 3);
  EXPECT_EQ(s.uniquePaths(7, 3), 28);
}

} // namespace