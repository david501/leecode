#include "60.hpp"
#include <gtest/gtest.h>

namespace {
TEST(getPermutation_Test, Test_getPermutation) {
  Solution s;

  EXPECT_EQ(s.getPermutation(3,3), "213");
  EXPECT_EQ(s.getPermutation(4,9), "2314");
}
} // namespace
