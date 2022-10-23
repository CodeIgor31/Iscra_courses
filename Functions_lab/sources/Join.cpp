// Copyright 2021 Your Name <your_email>

#include <lab05.hpp>

std::string join(const std::vector<std::string>& input,
                 const std::string& sep) {
  std::string result;
  for (size_t i = 0; i < input.size(); ++i) {
    if (i != input.size() - 1) {
      result += (input[i] + sep);
    } else {
      result += input[i];
    }
  }
  return result;
}
