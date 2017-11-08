#include <gtest/gtest.h>

#include "FizzBuzz.h"

TEST(FizzBuzz, FizzBuzz_returns_number_passed) {
  FizzBuzz fizzBuzz = FizzBuzz();
  ASSERT_EQ("1", fizzBuzz.Fizz(1));
}

TEST(FizzBuzz, FizzBuzz_returns_Fizz_When_Given_3) {
  FizzBuzz fizzBuzz = FizzBuzz();
  ASSERT_EQ("fizz", fizzBuzz.Fizz(3));
}

