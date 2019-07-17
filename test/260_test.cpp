#include "260.hpp"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace {

TEST(singleNumber_Test, Test_singleNumber) {
  Solution s;

  vector<int> nums = {1, 2, 1, 2, 3, 5};
  ASSERT_THAT(s.singleNumber(nums), ::testing::ElementsAre(3, 5));
}

} // namespace