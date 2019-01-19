#include "504.hpp"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

namespace
{
TEST(convertToBase7_Test, Test_convertToBase7)
{
    Solution s;

    EXPECT_EQ(s.convertToBase7(0), "0");
    EXPECT_EQ(s.convertToBase7(100), "202");
}

TEST(convertToBase7_Test, Test_convertToBase7_2)
{
    Solution s;

    EXPECT_EQ(s.convertToBase7(-7), "-10");
}

} // namespace
