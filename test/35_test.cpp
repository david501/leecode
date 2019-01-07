#include "35.hpp"
#include <gtest/gtest.h>

namespace
{

class searchInsertTest : public ::testing::Test
{
  protected:
    searchInsertTest()
    {
    }

    ~searchInsertTest() override
    {
    }

    void SetUp() override
    {
    }

    void TearDown() override
    {
    }

  public:
    Solution s;
};

TEST_F(searchInsertTest, TestsearchInsert)
{
    vector<int> nums{1, 3, 5, 6};
    EXPECT_EQ(s.searchInsert(nums, 5), 2);
    EXPECT_EQ(s.searchInsert(nums, 6), 3);
    EXPECT_EQ(s.searchInsert(nums, 2), 1);
    EXPECT_EQ(s.searchInsert(nums, 7), 4);
    EXPECT_EQ(s.searchInsert(nums, 0), 0);
}

} // namespace
