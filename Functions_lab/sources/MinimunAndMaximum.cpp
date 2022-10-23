// Copyright 2021 Your Name <your_email>

#include <lab05.hpp>

std::pair<float, float> minMax(const std::vector<float>& input) {
  if (!input.empty()) {
    float minimum = input[0];
    float maximum = input[0];
    for (size_t i = 1; i < input.size(); ++i) {
      if (input[i] > maximum) {
        maximum = input[i];
      }
      if (input[i] < minimum) {
        minimum = input[i];
      }
    }
    return std::make_pair(minimum, maximum);
  } else {
    return std::make_pair(std::numeric_limits<float>::min(),
                          std::numeric_limits<float>::max());
  }
}
