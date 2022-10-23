// Copyright 2021 Your Name <your_email>

#include <header.hpp>

size_t CountTwoness(const std::vector<Student>& students) {
  size_t res_counter = 0;
  for (size_t i = 0; i < students.size(); ++i) {
    if (std::find(students[i].Ratings.begin(), students[i].Ratings.end(), 2) !=
        students[i].Ratings.end()) {
      ++res_counter;
    }
  }
  return res_counter;
}
