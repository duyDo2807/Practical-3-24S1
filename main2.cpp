#include <iostream>

#include "Reverser.h"

int main() {
  Reverser digit;
  int result = digit.reverseDigit(54321);
  std::string character = digit.reverseString("High");
  std::cout << result << " " << character << std::endl;
}