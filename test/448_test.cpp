#include "448.hpp"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

namespace
{
TEST(findDisappearedNumbersTest, TestfindDisappearedNumbers)
{
    Solution s;

    vector<int> l1{4, 3, 2, 7, 8, 2, 3, 1};
    ASSERT_THAT(s.findDisappearedNumbers(l1), ::testing::ElementsAre(5, 6));
}

} // namespace
