// Copyright 2021 Your Name <your_email>

#include <header.hpp>

void SortByName(std::vector<Student>& students) {
  for (size_t i = 0; i < students.size(); ++i) {
    for (size_t j = 0; j < students.size() - i - 1; ++j) {
      if (students[j].Name > students[j + 1].Name) {
        std::swap(students[j], students[j + 1]);
      }
    }
  }
}
