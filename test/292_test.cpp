#include "292.hpp"
#include <gtest/gtest.h>

namespace
{
TEST(canWinNimTest, TestcanWinNim)
{
    Solution s;

    EXPECT_EQ(s.canWinNim(4), false);
}

} // namespace
