#include "53.hpp"
#include <gtest/gtest.h>

namespace
{

class maxSubArrayTest : public ::testing::Test
{
  protected:
    maxSubArrayTest()
    {
    }

    ~maxSubArrayTest() override
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

TEST_F(maxSubArrayTest, Test_maxSubArray)
{
    vector<int> nums{-2,1,-3,4,-1,2,1,-5,4};
    EXPECT_EQ(s.maxSubArray(nums), 6);

}

} // namespace
