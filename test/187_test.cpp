#include "187.hpp"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace {

TEST(findRepeatedDnaSequences_Test, Test_findRepeatedDnaSequences) {
  Solution s;

  ASSERT_THAT(s.findRepeatedDnaSequences("AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT"),
              ::testing::ElementsAre("AAAAACCCCC", "CCCCCAAAAA"));
}

TEST(findRepeatedDnaSequences_Test, Test_findRepeatedDnaSequences_1) {
  Solution s;

  ASSERT_THAT(s.findRepeatedDnaSequences("AAAAAAAAAAA"),
              ::testing::ElementsAre("AAAAAAAAAA"));
}

} // namespace
