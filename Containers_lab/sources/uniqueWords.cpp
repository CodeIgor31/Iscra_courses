// Copyright 2021 Your Name <your_email>

#include <lab.hpp>

std::unordered_set<std::string> uniqueWords(const std::string& str) {
  std::string current_word;
  std::unordered_set<std::string> result;
  std::unordered_set sep = {' ', ',', '.'};
  int i = 0;
  while (str[i] != '\0') {
    if (!sep.contains(str[i])) {
      current_word += str[i];
    } else if (current_word.length() != 0) {
      result.insert(current_word);
      current_word.clear();
    }
    if (str[i + 1] == '\0' && current_word.length() != 0) {
      result.insert(current_word);
    }
    i++;
  }
  return result;
}