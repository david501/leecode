#include "152.hpp"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace {

TEST(maxProduct_Test, Test_maxProduct) {
  Solution s;

  vector<int> tokens = {2, 3, -2, 4};
  EXPECT_EQ(s.maxProduct(tokens), 6);
}

TEST(maxProduct_Test, Test_maxProduct_1) {
  Solution s;

  vector<int> tokens = {-2, 0, -1};
  EXPECT_EQ(s.maxProduct(tokens), 0);
}

TEST(maxProduct_Test, Test_maxProduct_2) {
  Solution s;

  vector<int> tokens = {-2, 0, -1, 0, -3};
  EXPECT_EQ(s.maxProduct(tokens), 0);
}

TEST(maxProduct_Test, Test_maxProduct_3) {
  Solution s;

  vector<int> tokens = {-2, 0, -1, 1, 2, -1, 3, 4, -1, 5, 6, -2};
  EXPECT_EQ(s.maxProduct(tokens), 1440);
}

TEST(maxProduct_Test, Test_maxProduct_4) {
  Solution s;

  vector<int> tokens = {1, 2, -1, 1, 2, -1, 3, 4, -1, 5, 6};
  EXPECT_EQ(s.maxProduct(tokens), 720);
}

TEST(maxProduct_Test, Test_maxProduct_5) {
  Solution s;

  vector<int> tokens = {10, 20, -1, 1, 2, -1, 3, 4, -1, 5, 6};
  EXPECT_EQ(s.maxProduct(tokens), 4800);
}

} // namespace