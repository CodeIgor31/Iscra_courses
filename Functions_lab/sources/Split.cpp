// Copyright 2021 Your Name <your_email>

#include <lab05.hpp>

std::vector<std::string> split(const std::string& str, char sep) {
  std::vector<std::string> arr;
  std::string current_string;
  for (size_t i = 0; i < str.length(); ++i) {
    if (str[i] != sep) {
      current_string += str[i];
    } else if (current_string.length() != 0) {
      arr.push_back(current_string);
      current_string.clear();
    }
  }
  if (current_string.length() != 0) {
    arr.push_back(current_string);
  }
  return arr;
}
