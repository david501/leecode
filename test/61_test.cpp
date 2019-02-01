#include "61.hpp"
#include <gtest/gtest.h>

namespace {
TEST(rotateRightTest, TestrotateRight) {
  Solution s;
  auto head = stringToListNode("[1,2,3,4,5]");
  head = s.rotateRight(head, 2);
  EXPECT_EQ(listNodeToString(head), "[4, 5, 1, 2, 3]");
}

TEST(rotateRightTest, TestrotateRight_2) {
  Solution s;
  auto head = stringToListNode("[0,1,2]");
  head = s.rotateRight(head, 4);
  EXPECT_EQ(listNodeToString(head), "[2, 0, 1]");
}

TEST(rotateRightTest, TestrotateRight_3) {
  Solution s;
  auto head = stringToListNode("[0,1,2]");
  head = s.rotateRight(head, 3000000);
  EXPECT_EQ(listNodeToString(head), "[0, 1, 2]");
}

} // namespace