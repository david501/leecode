#include "6.hpp"
#include <gtest/gtest.h>

namespace {
TEST(convert_Test, Test_convert) {
  Solution s;

  EXPECT_EQ(s.convert("PAYPALISHIRING", 3), "PAHNAPLSIIGYIR");
  EXPECT_EQ(s.convert("PAYPALISHIRING", 4), "PINALSIGYAHRPI");
  EXPECT_EQ(s.convert("PAYPALISHIRING", 1), "PAYPALISHIRING");
}

} // namespace
