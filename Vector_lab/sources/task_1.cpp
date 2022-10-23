// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>



void multi_2(std::vector<int>& input) {
    for (size_t i = 0; i < input.size(); i++){
      input[i] *= 2;
    }
}

void reduce_a(std::vector<int>& input, int a) {
    for (size_t i = 0; i < input.size(); i++){
      input[i] -= abs(a);
    }
}

void div_on_first(std::vector<int>& input) {
    int first_elem = input[0];
    for (size_t i = 0; i < input.size(); i++){
      input[i] /= first_elem;
    }
}
