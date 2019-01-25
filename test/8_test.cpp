#include "8.hpp"
#include <gtest/gtest.h>

namespace {
TEST(myAtoi_Test, Test_myAtoi) {
  Solution s;

  EXPECT_EQ(s.myAtoi("+42"), 42);
  EXPECT_EQ(s.myAtoi("  -42"), -42);
  EXPECT_EQ(s.myAtoi("4193 with words"), 4193);
  EXPECT_EQ(s.myAtoi("words and 987"), 0);
  EXPECT_EQ(s.myAtoi("-91283472332"), -2147483648);
  EXPECT_EQ(s.myAtoi("9223372036854775808"), 2147483647);
}

} // namespace
