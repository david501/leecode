#include "268.hpp"
#include <gtest/gtest.h>

namespace
{
TEST(missingNumberTest, TestmissingNumber)
{
    Solution s;
    vector<int> l1{3, 0, 1};
    EXPECT_EQ(s.missingNumber(l1), 2);
    vector<int> l2{9, 6, 4, 2, 3, 5, 7, 0, 1};
    EXPECT_EQ(s.missingNumber(l2), 8);
}

} // namespace
