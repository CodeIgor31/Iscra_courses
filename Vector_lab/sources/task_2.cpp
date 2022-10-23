// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>
#include <cmath>

// Task 2.
int sum(const std::vector<int>& input) {
    int sum_array = 0;
    for (size_t i = 0; i < input.size(); i++){
      sum_array += input[i];
    }
    return sum_array;
}

int square_sum(const std::vector<int>& input) {
    int sum_square_array = 0;
    for (size_t i = 0; i < input.size(); i++){
      sum_square_array += pow(input[i], 2);
    }
    return sum_square_array;
}

int sum_six(const std::vector<int>& input) {
    int sum_of_six_elem = 0;
    for (size_t i = 0; i < 6; i++){
      sum_of_six_elem += input[i];
    }
    return sum_of_six_elem;
}

int sum_k(const std::vector<int>& input, int k1, int k2) {
    int sum_between_k1_k2 = 0;
    for (int i = k1; i <= k2; i++){
      sum_between_k1_k2 += input[i];
    }
    return sum_between_k1_k2;
}

int mean(const std::vector<int>& input) {
    int avg_sum = 0;
    int counter = 0;
    for (size_t i = 0; i < input.size(); i++){
      avg_sum += input[i];
      counter++;
    }
    return avg_sum/counter;
}

int mean_k(const std::vector<int>& input, int s1, int s2) {
    int avg_sum_between_s1_s2 = 0;
    int counter = 0;
    for (int i = s1; i <= s2; i++){
      avg_sum_between_s1_s2 += input[i];
      counter++;
    }
    return avg_sum_between_s1_s2/counter;
}
