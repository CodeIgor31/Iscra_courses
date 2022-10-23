// Copyright 2021 Your Name <your_email>

#include <lab.hpp>

std::vector<int>::iterator findInSorted(std::vector<int>::iterator first,
                                        std::vector<int>::iterator last,
                                        int el) {
  auto left = first;
  auto right = last;
  std::vector<int>::iterator middle;
  while (left <= right) {
    middle = left + (right - left) / 2;
    if (*middle == el) return middle;
    if (*middle > el) {
      right = middle - 1;
    } else {
      left = middle + 1;
    }
  }
  return last;
}
