#include "228.hpp"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace {

TEST(summaryRanges_Test, Test_summaryRanges) {
  Solution s;

  vector<int> nums = {0, 1, 2, 4, 5, 7};
  ASSERT_THAT(s.summaryRanges(nums),
              ::testing::ElementsAre("0->2", "4->5", "7"));
}

TEST(summaryRanges_Test, Test_summaryRanges_1) {
  Solution s;

  vector<int> nums = {0, 2, 3, 4, 6, 8, 9};
  ASSERT_THAT(s.summaryRanges(nums),
              ::testing::ElementsAre("0", "2->4", "6", "8->9"));
}

} // namespace