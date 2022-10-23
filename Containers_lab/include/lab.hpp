// Copyright 2021 Your Name <your_email>

#ifndef INCLUDE_LAB_HPP_
#define INCLUDE_LAB_HPP_

#include <algorithm>

#include <iterator>

#include <list>

#include <map>

#include <set>

#include <string>

#include <vector>

#include <unordered_set>
std::vector<int>::iterator Find(std::vector<int>::iterator first,
                                std::vector<int>::iterator last, int el);
std::vector<int>::iterator findInSorted(std::vector<int>::iterator first,
                                        std::vector<int>::iterator last,
                                        int el);
int wordsCounter(const std::string& str);
std::map<std::string, int> wordsMapCounter(const std::string& str);
std::unordered_set<std::string> uniqueWords(const std::string& str);
int diffWordsCounter(const std::string& str);
std::vector<int> plusesDeleter(std::vector<int>& input);
std::list<int> reverseNum(std::list<int>& input);
std::list<int> Sort(std::list<int>& input);

#endif  // INCLUDE_LAB_HPP_
