#include "234.hpp"
#include <gtest/gtest.h>

namespace
{
TEST(isPalindromeTest, TestisPalindrome)
{
    Solution s;
    vector<int> v{1, 2};
    auto l = createLists(v);
    auto e = createLists(v);
    EXPECT_EQ(s.isPalindrome(l), false);
    EXPECT_EQ(compareLists(l, e), true);
}

TEST(isPalindromeTest, TestisPalindrome_2)
{
    Solution s;
    vector<int> v{1, 2, 2, 1};
    auto l = createLists(v);
    auto e = createLists(v);
    EXPECT_EQ(s.isPalindrome(l), true);
    EXPECT_EQ(compareLists(l, e), true);
}

TEST(isPalindromeTest, TestisPalindrome_3)
{
    Solution s;
    vector<int> v{};
    auto l = createLists(v);
    auto e = createLists(v);
    EXPECT_EQ(s.isPalindrome(l), true);
    EXPECT_EQ(compareLists(l, e), true);
}

TEST(isPalindromeTest, TestisPalindrome_4)
{
    Solution s;
    vector<int> v{1};
    auto l = createLists(v);
    auto e = createLists(v);
    EXPECT_EQ(s.isPalindrome(l), true);
    EXPECT_EQ(compareLists(l, e), true);
}

TEST(isPalindromeTest, TestisPalindrome_5)
{
    Solution s;
    vector<int> v{1, 0, 1};
    auto l = createLists(v);
    auto e = createLists(v);
    EXPECT_EQ(s.isPalindrome(l), true);
    EXPECT_EQ(compareLists(l, e), true);
}

} // namespace
