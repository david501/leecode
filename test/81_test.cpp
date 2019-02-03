#include "81.hpp"
#include <gtest/gtest.h>

namespace {
TEST(search_Test, Test_search) {
  Solution s;

  vector<int> nums{2, 5, 6, 0, 0, 1, 2};
  EXPECT_EQ(s.search(nums, 0), true);
}

TEST(search_Test, Test_search_1) {
  Solution s;

  vector<int> nums{2, 5, 6, 0, 0, 1, 2};
  EXPECT_EQ(s.search(nums, 3), false);
}

TEST(search_Test, Test_search_2) {
  Solution s;

  vector<int> nums{2, 2, 2, 0, 2, 2};
  EXPECT_EQ(s.search(nums, 0), true);
}

TEST(search_Test, Test_search_3) {
  Solution s;

  vector<int> nums{0, 0, 1, 1, 2, 0};
  EXPECT_EQ(s.search(nums, 2), true);
}

TEST(search_Test, Test_search_4) {
  Solution s;

  vector<int> nums{3, 5, 1};
  EXPECT_EQ(s.search(nums, 1), true);
}

TEST(search_Test, Test_search_5) {
  Solution s;

  vector<int> nums{1};
  EXPECT_EQ(s.search(nums, 0), false);
}

TEST(search_Test, Test_search_6) {
  Solution s;

  vector<int> nums{1, 2, 1};
  EXPECT_EQ(s.search(nums, 2), true);
}

TEST(search_Test, Test_search_7) {
  Solution s;

  vector<int> nums{1, 2, 0, 1, 1, 1};
  EXPECT_EQ(s.search(nums, 0), true);
}
} // namespace