#include "13.hpp"
#include <gtest/gtest.h>

namespace
{

class RomanToIntTest : public ::testing::Test
{
  protected:
    RomanToIntTest()
    {
    }

    ~RomanToIntTest() override
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

TEST_F(RomanToIntTest, TestRomanToInt)
{
    EXPECT_EQ(s.romanToInt("III"), 3);
    EXPECT_EQ(s.romanToInt("IV"), 4);
    EXPECT_EQ(s.romanToInt("IX"), 9);
    EXPECT_EQ(s.romanToInt("LVIII"), 58);
    EXPECT_EQ(s.romanToInt("MCMXCIV"), 1994);
}

} // namespace
