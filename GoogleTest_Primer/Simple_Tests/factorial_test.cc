#include <gtest/gtest.h>
#include "factorial.h"

// Test the factorial of 0.
TEST(FactorialTest, HandlesZeroInput)
{
  EXPECT_EQ(Factorial(0), 1);
}

// Test the factorial of positive number.
TEST(FactorialTest, HandlesPositiveInput)
{
  EXPECT_EQ(Factorial(1), 1);
  EXPECT_EQ(Factorial(2), 2);
  EXPECT_EQ(Factorial(3), 6);
  EXPECT_EQ(Factorial(8), 40320);
}
