#include "405.hpp"
#include <gtest/gtest.h>

namespace
{
TEST(toHexTest, TesttoHex)
{
    Solution s;

    EXPECT_EQ(s.toHex(0), "0");
    EXPECT_EQ(s.toHex(26), "1a");
    EXPECT_EQ(s.toHex(-1), "ffffffff");
}

} // namespace
