#include "165.hpp"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace {

TEST(compareVersion_Test, Test_compareVersion) {
  Solution s;

  EXPECT_EQ(s.compareVersion("0.1","1.1"), -1);
  EXPECT_EQ(s.compareVersion("1.0.1", "1"), 1);
  EXPECT_EQ(s.compareVersion("7.5.2.4", "7.5.3"), -1);
  EXPECT_EQ(s.compareVersion("1.01", "1.001"), 0);
  EXPECT_EQ(s.compareVersion("1.0", "1.0.0"), 0);

}


} // namespace