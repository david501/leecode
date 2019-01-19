#include "520.hpp"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

namespace
{
TEST(findLUSlength_Test, Test_findLUSlength)
{
    Solution s;

    EXPECT_EQ(s.findLUSlength("aba", "cdc"), 3);


}

} // namespace
