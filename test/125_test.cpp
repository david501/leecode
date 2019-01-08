#include "125.hpp"
#include <gtest/gtest.h>

namespace
{
TEST(isPalindromeTest, TestisPalindrome)
{
    Solution s;
    EXPECT_EQ(s.isPalindrome("A man, a plan, a canal: Panama"), true);
}

TEST(isPalindromeTest, TestisPalindrome_2)
{
    Solution s;

    EXPECT_EQ(s.isPalindrome("race a car"), false);
}

TEST(isPalindromeTest, TestisPalindrome_3)
{
    Solution s;

    EXPECT_EQ(s.isPalindrome("0P"), false);
}

} // namespace
