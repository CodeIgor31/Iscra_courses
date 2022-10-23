// Copyright 2021 Your Name <your_email>

#include <header.hpp>

size_t CountExcellent(const std::vector<Student>& students) {
  size_t res_counter = 0;
  for (size_t i = 0; i < students.size(); ++i) {
    bool flag = true;
    for (size_t j = 0; j < students[i].Ratings.size() - 1; ++j) {
      if (students[i].Ratings[j] != students[i].Ratings[j + 1] ||
          students[i].Ratings[j] != 5) {
        flag = false;
        break;
      }
    }
    if (flag) {
      ++res_counter;
    }
  }
  return res_counter;
}
