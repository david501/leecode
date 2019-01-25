#include "3.hpp"
#include <gtest/gtest.h>

namespace {
TEST(lengthOfLongestSubstring_Test, Test_lengthOfLongestSubstring) {
  Solution s;

  EXPECT_EQ(s.lengthOfLongestSubstring("abcabcbb"), 3);
  EXPECT_EQ(s.lengthOfLongestSubstring("bbbbbb"), 1);
  EXPECT_EQ(s.lengthOfLongestSubstring("pwwkew"), 3);
  EXPECT_EQ(s.lengthOfLongestSubstring("abba"), 2);
}


} // namespace
