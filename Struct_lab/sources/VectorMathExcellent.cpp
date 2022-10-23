// Copyright 2021 Your Name <your_email>

#include <header.hpp>

std::vector<Student> VectorMathExcellent(const std::vector<Student>& students) {
  std::vector<Student> result;
  for (size_t i = 0; i < students.size(); ++i) {
    size_t math_index = 0;
    bool HasMathFlag = false;
    for (size_t j = 0; j < students[i].Subjects.size(); ++j) {
      if (students[i].Subjects[j] == "Math") {
        math_index = j;
        HasMathFlag = true;
        break;
      }
    }
    if (HasMathFlag && students[i].Ratings[math_index] == 5) {
      result.push_back(students[i]);
    }
  }
  return result;
}
