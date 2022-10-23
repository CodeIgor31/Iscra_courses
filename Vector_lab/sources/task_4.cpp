// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>

// Task 4.
void remove_negative(std::vector<int>& input) {
    for (size_t i = 0; i < input.size(); i++){
      if (input[i] < 0) {
        input.erase(input.begin() + static_cast<int>(i));
        break;
      }
    }
}

void remove_last_even(std::vector<int>& input) {
  for (size_t i = input.size()-1; i > 0; i--){
    if (input[i] % 2 == 0) {
      input.erase(input.begin() + static_cast<int>(i));
      break;
    }
  }
}
