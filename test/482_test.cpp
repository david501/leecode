#include "482.hpp"
#include <gtest/gtest.h>

namespace
{
TEST(licenseKeyFormatting_Test, Test_licenseKeyFormatting)
{
    Solution s;

    EXPECT_EQ(s.licenseKeyFormatting("5F3Z-2e-9-w",4), "5F3Z-2E9W");
    EXPECT_EQ(s.licenseKeyFormatting("2-5g-3-J",2), "2-5G-3J");

}

} // namespace
