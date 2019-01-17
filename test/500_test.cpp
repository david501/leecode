#include "500.hpp"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

namespace
{
TEST(findWords_Test, Test_findWords)
{
    Solution s;

    vector<string> vs{"Hello", "Alaska", "Dad", "Peace"};
    ASSERT_THAT(s.findWords(vs), ::testing::ElementsAre("Alaska", "Dad"));


}

} // namespace
