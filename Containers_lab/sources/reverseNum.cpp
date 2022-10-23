// Copyright 2021 Your Name <your_email>

#include <lab.hpp>

std::list<int> reverseNum(std::list<int>& input) {
  for (auto it = input.begin(); it != input.end(); std::advance(it, 1)) {
    if (*it != 0) {
      input.insert(it, -(*it));
    }
  }
  return input;
}
