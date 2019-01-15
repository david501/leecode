#include "415.hpp"
#include <gtest/gtest.h>

namespace
{
TEST(addStringsTest, TestaddStrings)
{
    Solution s;

    EXPECT_EQ(s.addStrings("9", "3"), "12");
    EXPECT_EQ(s.addStrings("199", "3"), "202");
    EXPECT_EQ(s.addStrings("3", "199"), "202");
}

} // namespace
