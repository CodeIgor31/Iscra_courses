// Copyright 2021 Your Name <your_email>

#include <lab.hpp>

int diffWordsCounter(const std::string& str) {
  std::set<std::string> res_set;
  std::unordered_set sep = {' ', ',', '.'};
  std::string current_word;
  int i = 0;
  while (str[i] != '\0') {
    if (!sep.contains(str[i])) {
      current_word += str[i];
    } else if (current_word.length() != 0) {
      res_set.insert(current_word);
      current_word.clear();
    }
    if ((str[i + 1] == '\0' && current_word.length() != 0)) {
      res_set.insert(current_word);
      current_word.clear();
    }
    i++;
  }
  return static_cast<int>(res_set.size());
}
