#include "71.hpp"
#include <gtest/gtest.h>

namespace {
TEST(simplifyPath_Test, Test_simplifyPath) {
  Solution s;

  EXPECT_EQ(s.simplifyPath("/home/"), "/home");
  EXPECT_EQ(s.simplifyPath("/../"), "/");
  EXPECT_EQ(s.simplifyPath("/home//foo/"), "/home/foo");
  EXPECT_EQ(s.simplifyPath("/a/./b/../../c/"), "/c");
  EXPECT_EQ(s.simplifyPath("/a/../../b/../c//.//"), "/c");
  EXPECT_EQ(s.simplifyPath("/a//b////c/d//././/.."), "/a/b/c");
}

} // namespace