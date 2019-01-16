#include "443.hpp"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

namespace
{
TEST(compressTest, Testcompress)
{
    Solution s;

    vector<char> l1{'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    EXPECT_EQ(s.compress(l1), 6);
    ASSERT_THAT(l1, ::testing::ElementsAre('a', '2', 'b', '2', 'c', '3'));

    vector<char> l2{'a'};
    EXPECT_EQ(s.compress(l2), 1);
    ASSERT_THAT(l2, ::testing::ElementsAre('a'));

    vector<char> l3{'a', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b'};
    EXPECT_EQ(s.compress(l3), 4);
    ASSERT_THAT(l3, ::testing::ElementsAre('a', 'b', '1', '2'));
}

} // namespace
