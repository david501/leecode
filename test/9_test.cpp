#include "9.hpp"
#include <gtest/gtest.h>

namespace
{

class IsPalindromeTest : public ::testing::Test
{
  protected:
    IsPalindromeTest()
    {
    }

    ~IsPalindromeTest() override
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

TEST_F(IsPalindromeTest, TestIsPalindrome)
{
    EXPECT_EQ(s.isPalindrome(121), true);
    EXPECT_EQ(s.isPalindrome(-121), false);
    EXPECT_EQ(s.isPalindrome(10), false);
}

} // namespace
