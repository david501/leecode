#include "20.hpp"
#include <gtest/gtest.h>

namespace
{

class isValidParenthesesTest : public ::testing::Test
{
  protected:
    isValidParenthesesTest()
    {
    }

    ~isValidParenthesesTest() override
    {
    }

    void SetUp() override
    {
    }

    void TearDown() override
    {
    }

  public:
    Solution s;
};

TEST_F(isValidParenthesesTest, TestisValidParentheses)
{
    EXPECT_EQ(s.isValid("()"), true);
    EXPECT_EQ(s.isValid("(){}[]"), true);
    EXPECT_EQ(s.isValid("(]"), false);
    EXPECT_EQ(s.isValid("([)]"), false);
    EXPECT_EQ(s.isValid("{[]}"), true);
}

} // namespace
