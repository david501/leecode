#include "12.hpp"
#include <gtest/gtest.h>

namespace {
TEST(intToRoman_Test, Test_intToRoman) {
  Solution s;

  EXPECT_EQ(s.intToRoman(3), "III");
  EXPECT_EQ(s.intToRoman(4), "IV");
  EXPECT_EQ(s.intToRoman(9), "IX");
  EXPECT_EQ(s.intToRoman(58), "LVIII");
  EXPECT_EQ(s.intToRoman(1994), "MCMXCIV");
}

} // namespace
