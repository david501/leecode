#include "11.hpp"
#include <gtest/gtest.h>

namespace {
TEST(maxArea_Test, Test_maxArea) {
  Solution s;

  vector<int> l{1, 8, 6, 2, 5, 4, 8, 3, 7};
  EXPECT_EQ(s.maxArea(l), 49);

}

} // namespace
