// Copyright 2021 Your Name <your_email>

#include <lab05.hpp>

int argmax(const std::vector<float>& input) {
  if (!input.empty()) {
    float max = input[0];
    size_t index = 0;
    for (size_t i = 1; i < input.size(); ++i) {
      if (input[i] > max) {
        max = input[i];
        index = i;
      }
    }
    return static_cast<int>(index);
  } else {
    return -1;
  }
}
