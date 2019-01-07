#include "66.hpp"
#include <gtest/gtest.h>

namespace
{

class plusOneTest : public ::testing::Test
{
  protected:
    plusOneTest()
    {
    }

    ~plusOneTest() override
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

TEST_F(plusOneTest, Test_plusOne)
{
    vector<int> input{1, 2, 9};
    vector<int> output{1, 3, 0};

    vector<int> result = s.plusOne(input);

    EXPECT_EQ(result.size(), output.size());
    for (int i = 0; i < output.size(); ++i)
        EXPECT_EQ(result[i], output[i]);
}

TEST_F(plusOneTest, Test_plusOne_with_carry)
{
    vector<int> input{9, 9};
    vector<int> output{1, 0, 0};

    vector<int> result = s.plusOne(input);

    EXPECT_EQ(result.size(), output.size());
    for (int i = 0; i < output.size(); ++i)
        EXPECT_EQ(result[i], output[i]);
}

} // namespace
