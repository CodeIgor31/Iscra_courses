// Copyright 2021 Your Name <your_email>

#include <lab.hpp>

int wordsCounter(const std::string& str) {
  std::unordered_set sep = {' ', ',', '.'};
  int words_counter = 0;
  bool check_word = false;
  for (size_t i = 0; i < str.size(); ++i) {
    if (!sep.contains(str[i])) {
      check_word = true;
    } else if (check_word) {
      words_counter++;
      check_word = false;
    }
  }
  if (check_word) {
    words_counter++;
  }
  return words_counter;
}
