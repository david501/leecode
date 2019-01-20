#include "697.hpp"
#include <gtest/gtest.h>

namespace {
TEST(findShortestSubArray_Test, Test_findShortestSubArray) {
  Solution s;

  vector<int> l{1, 2, 2, 3, 1};
  EXPECT_EQ(s.findShortestSubArray(l), 2);
}

TEST(findShortestSubArray_Test, Test_findShortestSubArray_2) {
  Solution s;

  vector<int> l{1, 2, 2, 3, 1, 4, 2};
  EXPECT_EQ(s.findShortestSubArray(l), 6);
}

} // namespace
