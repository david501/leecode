#include "34.hpp"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace {

TEST(searchRange_Test, Test_searchRange) {
  Solution s;

  vector<int> nums{5, 7, 7, 8, 8, 10};
  ASSERT_THAT(s.searchRange(nums, 8), ::testing::ElementsAre(3, 4));
}

TEST(searchRange_Test, Test_searchRange_1) {
  Solution s;

  vector<int> nums{5, 7, 7, 8, 8, 10};
  ASSERT_THAT(s.searchRange(nums, 6), ::testing::ElementsAre(-1, -1));
}

TEST(searchRange_Test, Test_searchRange_2) {
  Solution s;

  vector<int> nums{};
  ASSERT_THAT(s.searchRange(nums, 0), ::testing::ElementsAre(-1, -1));
}

TEST(searchRange_Test, Test_searchRange_3) {
  Solution s;

  vector<int> nums{-1};
  ASSERT_THAT(s.searchRange(nums, 0), ::testing::ElementsAre(-1, -1));
}
} // namespace
