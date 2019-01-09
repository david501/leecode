#include "190.hpp"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace
{

TEST(reverseBitsTest, TestreverseBits)
{
    Solution s;

    EXPECT_EQ(s.reverseBits(43261596), 964176192);
}

TEST(reverseBitsTest, TestreverseBits_2)
{
    Solution s;

    EXPECT_EQ(s.reverseBits(4294967293), 3221225471);
}

} // namespace
