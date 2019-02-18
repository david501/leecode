#include "166.hpp"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace {

TEST(fractionToDecimal_Test, Test_fractionToDecimal) {
  Solution s;

  EXPECT_EQ(s.fractionToDecimal(1, 2), "0.5");
  EXPECT_EQ(s.fractionToDecimal(2, 1), "2");
  EXPECT_EQ(s.fractionToDecimal(2, 3), "0.(6)");
  EXPECT_EQ(s.fractionToDecimal(-3, 7), "-0.(428571)");
  EXPECT_EQ(s.fractionToDecimal(1, -11), "-0.(09)");
  EXPECT_EQ(s.fractionToDecimal(-1, -22), "0.0(45)");
  EXPECT_EQ(s.fractionToDecimal(0, -22), "0");
}

} // namespace