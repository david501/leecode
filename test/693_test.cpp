#include "693.hpp"
#include <gtest/gtest.h>

namespace {
TEST(hasAlternatingBits_Test, Test_hasAlternatingBits) {
  Solution s;

  EXPECT_EQ(s.hasAlternatingBits(1), true);
  EXPECT_EQ(s.hasAlternatingBits(2), true);
  EXPECT_EQ(s.hasAlternatingBits(3), false);
  EXPECT_EQ(s.hasAlternatingBits(4), false);
  EXPECT_EQ(s.hasAlternatingBits(5), true);
  EXPECT_EQ(s.hasAlternatingBits(7), false);
  EXPECT_EQ(s.hasAlternatingBits(10), true);
  EXPECT_EQ(s.hasAlternatingBits(11), false);
}

} // namespace
