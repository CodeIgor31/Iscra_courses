// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>

// Task 3.
void swap_el(std::vector<int>& input) {
    std::swap(input[0], input[input.size()-3]);
    std::swap(input[1], input[input.size()-2]);
    std::swap(input[2], input[input.size()-1]);
}
