#include "33.hpp"

#include <gtest/gtest.h>

namespace {

TEST(search_Test, Test_search) {
  Solution s;

  vector<int> nums{4, 5, 6, 7, 0, 1, 2};
  EXPECT_EQ(s.search(nums, 4), 0);
  EXPECT_EQ(s.search(nums, 5), 1);
  EXPECT_EQ(s.search(nums, 6), 2);
  EXPECT_EQ(s.search(nums, 7), 3);
  EXPECT_EQ(s.search(nums, 0), 4);
  EXPECT_EQ(s.search(nums, 1), 5);
  EXPECT_EQ(s.search(nums, 2), 6);
}

TEST(search_Test, Test_search_1) {
  Solution s;

  vector<int> nums{4, 5, 6, 7, 0, 1, 2};
  EXPECT_EQ(s.search(nums, 3), -1);
  EXPECT_EQ(s.search(nums, -2), -1);
  EXPECT_EQ(s.search(nums, 9), -1);
}

TEST(search_Test, Test_search_2) {
  Solution s;

  vector<int> nums{0, 1, 2, 4, 5, 6, 7};
  EXPECT_EQ(s.search(nums, 0), 0);
  EXPECT_EQ(s.search(nums, 4), 3);
  EXPECT_EQ(s.search(nums, 7), 6);
  EXPECT_EQ(s.search(nums, -2), -1);
  EXPECT_EQ(s.search(nums, 9), -1);
}

} // namespace
