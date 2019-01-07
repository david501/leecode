#include "38.hpp"
#include <gtest/gtest.h>

namespace
{

class countAndSayTest : public ::testing::Test
{
  protected:
    countAndSayTest()
    {
    }

    ~countAndSayTest() override
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

TEST_F(countAndSayTest, Test_countAndSay)
{
    EXPECT_EQ(s.countAndSay(1), "1");
    EXPECT_EQ(s.countAndSay(2), "11");
    EXPECT_EQ(s.countAndSay(3), "21");
    EXPECT_EQ(s.countAndSay(4), "1211");
    EXPECT_EQ(s.countAndSay(5), "111221");
}

} // namespace
