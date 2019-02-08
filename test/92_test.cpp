#include "92.hpp"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace {
TEST(reverseBetween_Test, Test_reverseBetween) {
  Solution s;

  auto head = stringToListNode("[1, 2, 3, 4, 5]");
  auto out = s.reverseBetween(head, 2, 4);
  EXPECT_EQ(listNodeToString(out), "[1, 4, 3, 2, 5]");
}

} // namespace