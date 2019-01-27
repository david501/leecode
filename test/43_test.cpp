#include "43.hpp"
#include <gtest/gtest.h>

namespace {
TEST(multiply_Test, Test_multiply) {
  Solution s;

  EXPECT_EQ(s.multiply("2","3"), "6");
  EXPECT_EQ(s.multiply("123", "456"), "56088");
  EXPECT_EQ(s.multiply("0", "0"), "0");
  EXPECT_EQ(s.multiply("992", "0"), "0");
}

} // namespace
