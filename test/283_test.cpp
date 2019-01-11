#include "283.hpp"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

namespace
{
TEST(moveZeroesTest, TestmoveZeroes)
{
    Solution s;
    vector<int> l1{0,1,0,3,12};
    s.moveZeroes(l1);
    ASSERT_THAT(l1, ::testing::ElementsAre(1,3,12,0,0));
}

} // namespace
