#include "541.hpp"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace {
TEST(reverseStr_Test, Test_reverseStr) {
  Solution s;

  EXPECT_EQ(s.reverseStr("abcdefg", 2), "bacdfeg");
}

} // namespace
