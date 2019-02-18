#include "150.hpp"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace {

TEST(evalRPN_Test, Test_evalRPN) {
  Solution s;

  vector<string> tokens = {"2", "1", "+", "3", "*"};
  EXPECT_EQ(s.evalRPN(tokens), 9);
}

TEST(evalRPN_Test, Test_evalRPN_1) {
  Solution s;

  vector<string> tokens = {"4", "13", "5", "/", "+"};
  EXPECT_EQ(s.evalRPN(tokens), 6);
}

TEST(evalRPN_Test, Test_evalRPN_2) {
  Solution s;

  vector<string> tokens = {"10", "6", "9",  "3", "+", "-11", "*",
                           "/",  "*", "17", "+", "5", "+"};
  EXPECT_EQ(s.evalRPN(tokens), 22);
}

} // namespace