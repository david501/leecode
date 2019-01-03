#include "7.hpp"
#include <gtest/gtest.h>

namespace
{

class ReverseTest : public ::testing::Test
{
  protected:
    ReverseTest()
    {
    }

    ~ReverseTest() override
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

TEST_F(ReverseTest, TestReverse)
{
    EXPECT_EQ(s.reverse(123), 321);
    EXPECT_EQ(s.reverse(-123), -321);
    EXPECT_EQ(s.reverse(120), 21);
    EXPECT_EQ(s.reverse(1563847412), 0);
    EXPECT_EQ(s.reverse(-2147483648), 0);
    EXPECT_EQ(s.reverse(1463847412), 2147483641);
    EXPECT_EQ(s.reverse(1534236469), 0);
}

} // namespace
