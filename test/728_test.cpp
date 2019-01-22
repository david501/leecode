#include "728.hpp"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

namespace {
TEST(selfDividingNumbers_Test, Test_selfDividingNumbers) {
  Solution s;

  ASSERT_THAT(
      s.selfDividingNumbers(1, 22),
      ::testing::ElementsAre(1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 15, 22));
}

} // namespace
