#include "Reverser.h"

#include <cmath>

int Reverser::reverseDigit(int value) {
  if (value < 0) {
    return -1;
  } else if (value < 10) {
    return value;
  } else {
    return value % 10 * std::pow(10, numDigits(value) - 1) +
           reverseDigit(value / 10);
  }
}

int Reverser::numDigits(int value) {
  int count = 0;
  while (value != 0) {
    value /= 10;
    ++count;
  }
  return count;
}

std::string Reverser::reverseString(std::string characters) {
  if (characters.empty()) {
    return "ERROR";
  }
  return reverseStringExtra(characters, 0);
}

std::string Reverser::reverseStringExtra(std::string characters, int index) {
  if (index == characters.size()) {
    return "";
  }
  return reverseStringExtra(characters, index + 1) + characters[index];
}