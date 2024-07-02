#include "../srcs/my_library.h"
#include "gtest/gtest.h"

TEST(Simple, ReturnHi) {
  Simple simple;
  std::string actual = simple.HelloWorld();
  std::string expected = "Hello World";
  EXPECT_EQ(expected, actual);
}