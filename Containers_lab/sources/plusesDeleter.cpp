// Copyright 2021 Your Name <your_email>

#include <lab.hpp>

std::vector<int> plusesDeleter(std::vector<int>& input) {
  for (auto it = input.begin(); it != input.end(); std::advance(it, 1)) {
    if (*it > 0) {
      input.erase(it);
      std::advance(it, -1);
    }
  }
  return input;
}
