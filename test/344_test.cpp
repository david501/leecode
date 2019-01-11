#include "344.hpp"
#include <gtest/gtest.h>

namespace
{
TEST(reverseStringTest, TestreverseString)
{
    Solution s;

    EXPECT_EQ(s.reverseString("hello"), "olleh");

    EXPECT_EQ(s.reverseString("A man, a plan, a canal: Panama"), "amanaP :lanac a ,nalp a ,nam A");

}

} // namespace
