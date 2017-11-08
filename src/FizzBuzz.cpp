#include "FizzBuzz.h"

FizzBuzz::FizzBuzz() {
  
}

std::string FizzBuzz::Fizz(int number) {
  if (number == 3){
    return "fizz";
  } else {
    return std::to_string(number);
  }
}