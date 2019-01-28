#include "50.hpp"
#include <gtest/gtest.h>

namespace {
TEST(myPow_Test, Test_myPow) {
  Solution s;

  EXPECT_FLOAT_EQ(s.myPow(2.0, 10), 1024.0);
  EXPECT_FLOAT_EQ(s.myPow(2.1, 3), 9.261);
  EXPECT_FLOAT_EQ(s.myPow(2.0, -2), 0.25);
  EXPECT_FLOAT_EQ(s.myPow(2.0, INT_MIN), pow(2.0, INT_MIN));
}

} // namespace
