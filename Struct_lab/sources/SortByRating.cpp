// Copyright 2021 Your Name <your_email>

#include <header.hpp>

float AvgSumStud(const Student& student) {
  float sum = 0;
  for (size_t i = 0; i < student.Ratings.size(); ++i) {
    sum += static_cast<float>(student.Ratings[i]);
  }
  return sum / static_cast<float>(student.Ratings.size());
}

void SortByRating(std::vector<Student>& students) {
  for (size_t i = 0; i < students.size(); ++i) {
    for (size_t j = 0; j < students.size() - i - 1; ++j) {
      if (AvgSumStud(students[j]) < AvgSumStud(students[j + 1])) {
        std::swap(students[j], students[j + 1]);
      }
    }
  }
}
