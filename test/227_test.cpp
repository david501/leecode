#include "227.hpp"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace {

TEST(calculate_Test, Test_calculate) {
  Solution s;

  EXPECT_EQ(s.calculate("3+2*2"), 7);
  EXPECT_EQ(s.calculate("3/2"), 1);
  EXPECT_EQ(s.calculate(" 3+5 / 2 "), 5);
  EXPECT_EQ(s.calculate(" 1-1+1 "), 1);
  EXPECT_EQ(s.calculate("2147483647"), 2147483647);
}

} // namespace