// Copyright 2021 Your Name <your_email>

#include <lab05.hpp>

void sort(std::vector<float>& input) {
  if (!input.empty()) {
    for (size_t i = 0; i < input.size() - 1; ++i) {
      for (size_t j = 0; j < input.size() - i - 1; ++j) {
        if (input[j] < input[j + 1]) {
          std::swap(input[j], input[j + 1]);
        }
      }
    }
  }
}
