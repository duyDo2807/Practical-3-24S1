#ifndef REVERSER_H
#define REVERSER_H

#include <iostream>
#include <string>

class Reverser {
 private:
  int numDigits(int value);
  std::string reverseStringExtra(std::string characters, int index);

 public:
  int reverseDigit(int value);
  std::string reverseString(std::string characters);
};

#endif