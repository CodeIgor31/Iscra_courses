// Copyright 2021 Your Name <your_email>

#include <header.hpp>

std::vector<std::string> GroupsId(const std::vector<Student>& students) {
  std::vector<std::string> result;
  if (students.size() != 0) {
    result.push_back(students[0].GroupId);
    for (size_t i = 1; i < students.size(); ++i) {
      bool flag = false;
      for (size_t j = 0; j < result.size(); ++j) {
        if (students[i].GroupId == result[j]) {
          flag = true;
          break;
        }
      }
      if (!flag) {
        result.push_back(students[i].GroupId);
      }
    }
  }
  return result;
}
