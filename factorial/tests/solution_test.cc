#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(FactorialTest, HandlesPositiveNumber) {
  Solution solution;
  int a = 5;
  EXPECT_EQ(solution.Factorial(a), 120);
  EXPECT_EQ(solution.FactorialRecursive(a), 120);
}

TEST(FactorialTest, HandlesZero) {
  Solution solution;
  int b=0;
  EXPECT_EQ(solution.Factorial(b), 1);
  EXPECT_EQ(solution.FactorialRecursive(b), 1);
}

TEST(FactorialTest, HandlesNegativeNumber) {
  Solution solution;
  int c=-1;
  EXPECT_EQ(solution.Factorial(c), -1);
  EXPECT_EQ(solution.FactorialRecursive(c), -1);
}
