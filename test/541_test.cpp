#include "541.hpp"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

namespace
{
TEST(reverseStr_Test, Test_reverseStr)
{
    Solution s;

    EXPECT_EQ(s.reverseStr("abcdefg", 2), "bacdfeg");

}



} // namespace
