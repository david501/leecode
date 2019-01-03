#include "1.hpp"
#include <gtest/gtest.h>

namespace
{

class TwoSumTest : public ::testing::Test
{
  protected:
    TwoSumTest()
    {
    }

    ~TwoSumTest() override
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
    vector<int> input = {2, 7, 11, 15};
    vector<int> expected = {0, 1};
};

TEST_F(TwoSumTest, TestTwoSumWithWrongTarget)
{
    auto result = s.twoSum(input, 7);
    EXPECT_EQ(result.size(), 0);
}

TEST_F(TwoSumTest, TestTwoSum)
{
    auto result = s.twoSum(input, 9);
    EXPECT_EQ(result.size(), 2);
    for (int i = 0; i < 2; ++i)
        EXPECT_EQ(expected[i], result[i]);
}

} // namespace
