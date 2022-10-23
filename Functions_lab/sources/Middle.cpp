// Copyright 2021 Your Name <your_email>

#include <lab05.hpp>

float mean(const std::vector<float>& input) {
  float avg_sum = 0;
  for (size_t i = 0; i < input.size(); ++i) {
    avg_sum += input[i];
  }
  if (!input.empty()) {
    return avg_sum / static_cast<float>(input.size());
  } else {
    return 0;
  }
}
