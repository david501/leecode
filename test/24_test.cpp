#include "24.hpp"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace {
TEST(swapPairs_Test, Test_swapPairs) {
  Solution s;

  auto head = stringToListNode("[1,2,3,4]");
  EXPECT_EQ(listNodeToString(s.swapPairs(head)), "[2, 1, 4, 3]");
}

} // namespace
