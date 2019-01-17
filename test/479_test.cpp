#include "479.hpp"
#include <gtest/gtest.h>

namespace
{
TEST(largestPalindrome_Test, Test_largestPalindrome)
{
    Solution s;

    EXPECT_EQ(s.largestPalindrome(1), 9);
    EXPECT_EQ(s.largestPalindrome(2), 987);
    EXPECT_EQ(s.largestPalindrome(7), 877);

}

} // namespace
