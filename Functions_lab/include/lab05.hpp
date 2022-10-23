// Copyright 2021 Your Name <your_email>

#ifndef INCLUDE_LAB05_HPP_
#define INCLUDE_LAB05_HPP_
#include <iostream>
#include <limits>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>

float mean(const std::vector<float>&);
std::pair<float, float> minMax(const std::vector<float>&);
int argmax(const std::vector<float>& input);
void sort(std::vector<float>&);
bool remove_first_negative_element(std::vector<int>& vec, int& removed_element);
std::string replace(const std::string& str, const std::string& old,
                    const std::string& new_string);
std::vector<std::string> split(const std::string&, char sep);
std::string join(const std::vector<std::string>&, const std::string& sep);

#endif  // INCLUDE_LAB05_HPP_
