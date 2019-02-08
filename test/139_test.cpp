#include "139.hpp"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace {

TEST(wordBreak_Test, Test_wordBreak) {
  Solution s;

  vector<string> dict = {"leet", "code"};
  EXPECT_EQ(s.wordBreak("leetcode", dict), true);
}

TEST(wordBreak_Test, Test_wordBreak_1) {
  Solution s;

  vector<string> dict = {"apple", "pen"};
  EXPECT_EQ(s.wordBreak("applepenapple", dict), true);
}

TEST(wordBreak_Test, Test_wordBreak_2) {
  Solution s;

  vector<string> dict = {"cats", "dog", "sand", "and", "cat"};
  EXPECT_EQ(s.wordBreak("catsandog", dict), false);
}

TEST(wordBreak_Test, Test_wordBreak_3) {
  Solution s;

  vector<string> dict = {"a",         "aa",        "aaa",     "aaaa",
                         "aaaaa",     "aaaaaa",    "aaaaaaa", "aaaaaaaa",
                         "aaaaaaaaa", "aaaaaaaaaa"};
  EXPECT_EQ(s.wordBreak("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"
                        "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"
                        "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab",
                        dict),
            false);
}

TEST(wordBreak_Test, Test_wordBreak_4) {
  Solution s;

  vector<string> dict = {"a",         "aa",        "aaa",     "aaaa",
                         "aaaaa",     "aaaaaa",    "aaaaaaa", "aaaaaaaa",
                         "aaaaaaaaa", "aaaaaaaaaa"};
  EXPECT_EQ(s.wordBreak("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"
                        "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"
                        "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
                        dict),
            true);
}

TEST(wordBreak_Test, Test_wordBreak_5) {
  Solution s;

  vector<string> dict = {"aa",         "aaa",     "aaaa",     "aaaaa",
                         "aaaaaa",     "aaaaaaa", "aaaaaaaa", "aaaaaaaaa",
                         "aaaaaaaaaa", "ba"};
  EXPECT_EQ(s.wordBreak("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"
                        "aaaaaaaaaaaaaaaaaaaaabaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"
                        "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
                        dict),
            false);
}

TEST(wordBreak_Test, Test_wordBreak_6) {
  Solution s;

  vector<string> dict = {"a", "abc", "b", "cd"};
  EXPECT_EQ(s.wordBreak("abcd", dict), true);
}

} // namespace