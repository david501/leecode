#include "29.hpp"

#include <gtest/gtest.h>

namespace {

TEST(divide_Test, Test_divide) {
  Solution s;

  EXPECT_EQ(s.divide(1, 1), 1);
  EXPECT_EQ(s.divide(10, 1), 10);
  EXPECT_EQ(s.divide(10, 3), 3);
  EXPECT_EQ(s.divide(7, -3), -2);
  EXPECT_EQ(s.divide(INT_MAX, -3), INT_MAX / (-3));
  EXPECT_EQ(s.divide(INT_MIN, -3), INT_MIN / (-3));
  EXPECT_EQ(s.divide(INT_MIN, -1), INT_MAX);
}
} // namespace
