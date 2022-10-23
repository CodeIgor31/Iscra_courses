// Copyright 2021 Your Name <your_email>

#include <lab.hpp>

std::map<std::string, int> wordsMapCounter(const std::string& str) {
  std::map<std::string, int> result;
  std::unordered_set sep = {' ', ',', '.'};
  std::string current_word;
  int i = 0;
  while (str[i] != '\0') {
    int counter = 0;
    if (!sep.contains(str[i])) {
      current_word += str[i];
    } else if (current_word.length() != 0) {
      auto pos = str.find(current_word, 0);
      while (pos != std::string::npos) {
        counter++;
        pos = str.find(current_word, pos + 1);
      }
      result[current_word] = counter;
      current_word.clear();
    }
    if (str[i + 1] == '\0' && current_word.length() != 0) {
      auto pos = str.find(current_word, 0);
      while (pos != std::string::npos) {
        counter++;
        pos = str.find(current_word, pos + 1);
      }
      result[current_word] = counter;
      current_word.clear();
    }
    i++;
  }
  return result;
}
