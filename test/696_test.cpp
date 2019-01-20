#include "696.hpp"
#include <gtest/gtest.h>

namespace {
TEST(countBinarySubstrings_Test, Test_countBinarySubstrings) {
  Solution s;

  EXPECT_EQ(s.countBinarySubstrings("00110011"), 6);
  EXPECT_EQ(s.countBinarySubstrings("10101"), 4);

}

} // namespace
