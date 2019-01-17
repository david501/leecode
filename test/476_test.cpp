#include "476.hpp"
#include <gtest/gtest.h>

namespace
{
TEST(findComplement_Test, Test_findComplement)
{
    Solution s;

    EXPECT_EQ(s.findComplement(5), 2);
    EXPECT_EQ(s.findComplement(1), 0);
    EXPECT_EQ(s.findComplement(0), 0);
    EXPECT_EQ(s.findComplement(INT_MAX), 0);
}

} // namespace
