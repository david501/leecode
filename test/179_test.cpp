#include "179.hpp"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace {

TEST(largestNumber_Test, Test_largestNumber) {
  Solution s;

  vector<int> nums={10,2};
  EXPECT_EQ(s.largestNumber(nums), "210");
}

TEST(largestNumber_Test, Test_largestNumber_1) {
  Solution s;

  vector<int> nums = {3, 30, 34, 5, 9};
  EXPECT_EQ(s.largestNumber(nums), "9534330");
}

TEST(largestNumber_Test, Test_largestNumber_2) {
  Solution s;

  vector<int> nums = {121,12};
  EXPECT_EQ(s.largestNumber(nums), "12121");
}

TEST(largestNumber_Test, Test_largestNumber_3) {
  Solution s;

  vector<int> nums = {0, 0};
  EXPECT_EQ(s.largestNumber(nums), "0");
}

} // namespace