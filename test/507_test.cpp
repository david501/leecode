#include "507.hpp"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

namespace
{
TEST(checkPerfectNumber_Test, Test_checkPerfectNumber)
{
    Solution s;

    EXPECT_EQ(s.checkPerfectNumber(28), true);
}


} // namespace
