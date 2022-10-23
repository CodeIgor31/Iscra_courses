// Copyright 2021 Your Name <your_email>

#include <header.hpp>

std::vector<Group> Groups(const std::vector<Student>& students) {
  std::vector<Group> result;
  std::vector<std::string> groups;
  if (!students.empty()) {
    groups.push_back(students[0].GroupId);
    for (size_t i = 1; i < students.size(); ++i) {
      bool flag = false;
      for (size_t j = 0; j < groups.size(); ++j) {
        if (students[i].GroupId == groups[j]) {
          flag = true;
          break;
        }
      }
      if (!flag) {
        groups.push_back(students[i].GroupId);
      }
    }
    for (size_t i = 0; i < groups.size(); ++i) {
      Group tech_group;
      for (size_t j = 0; j < students.size(); ++j) {
        if (students[j].GroupId == groups[i]) {
          tech_group.Students.push_back(students[j]);
        }
      }
      tech_group.Id = groups[i];
      result.push_back(tech_group);
    }
  }
  return result;
}
