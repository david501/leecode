#include "136.hpp"
#include <gtest/gtest.h>

namespace
{
TEST(singleNumberTest, TestsingleNumber)
{
    Solution s;
    vector<int> l{2,2,1};
    EXPECT_EQ(s.singleNumber(l), 1);
}

TEST(singleNumberTest, TestsingleNumber_2)
{
    Solution s;
    vector<int> l{4,1,2,1,2};
    EXPECT_EQ(s.singleNumber(l), 4);
}


} // namespace
