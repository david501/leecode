#include "5.hpp"
#include <gtest/gtest.h>

namespace {
TEST(longestPalindrome_Test, Test_longestPalindrome) {
  Solution s;

  EXPECT_EQ(s.longestPalindrome("babad"), "bab");
  EXPECT_EQ(s.longestPalindrome("cbbd"), "bb");

}

} // namespace
