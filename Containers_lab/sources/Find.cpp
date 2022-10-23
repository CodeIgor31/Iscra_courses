// Copyright 2021 Your Name <your_email>

#include <lab.hpp>

std::vector<int>::iterator Find(std::vector<int>::iterator first,
                                std::vector<int>::iterator last, int el) {
  for (auto it = first; it < last; std::advance(it, 1)) {
    if (*it == el) return it;
  }
  return last;
}
