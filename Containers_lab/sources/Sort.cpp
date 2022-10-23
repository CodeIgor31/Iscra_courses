// Copyright 2021 Your Name <your_email>

#include <lab.hpp>

std::list<int> Sort(std::list<int>& input) {
  for (auto it = input.begin(); it != input.cend(); std::advance(it, 1)) {
    for (auto jt = input.begin(); jt != input.end(); std::advance(jt, 1)) {
      if (*it > *jt) {
        std::iter_swap(it, jt);
      }
    }
  }
  return input;
}
