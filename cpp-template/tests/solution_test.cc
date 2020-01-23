#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HelloWorldShould, ReturnHelloWorld) {
  Solution solution;
  std::string actual = solution.PrintSelf();
  std::string expected = "Ruiyu Zhao\nElectrical Engineering";
  EXPECT_EQ(expected, actual);
}