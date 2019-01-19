#include "520.hpp"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

namespace
{
TEST(detectCapitalUse_Test, Test_detectCapitalUse)
{
    Solution s;

    EXPECT_EQ(s.detectCapitalUse("USA"), true);
    EXPECT_EQ(s.detectCapitalUse("FLaG"), false);
    EXPECT_EQ(s.detectCapitalUse("leetcode"), true);
    EXPECT_EQ(s.detectCapitalUse("Google"), true);

}

} // namespace
