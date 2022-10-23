// Copyright 2021 Your Name <your_email>

#include <lab05.hpp>

bool remove_first_negative_element(std::vector<int>& vec,
                                   int& removed_element) {
  removed_element = 0;
  for (size_t i = 0; i < vec.size(); ++i) {
    if (vec[i] < 0) {
      removed_element = vec[i];
      vec.erase(vec.begin() + static_cast<int>(i));
      break;
    }
  }
  if (removed_element == 0){
    return false;
  } else {
    return true;
  }
}
