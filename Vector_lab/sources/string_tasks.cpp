// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>

// Task 5.
bool name_is_even(const std::string& name) {
    return name.length() % 2 == 0;
}

// Task 6.
bool first_is_longer(const std::string& name_one, const std::string& name_two) {
    return name_one.length() > name_two.length();
}

// Task 7.
void longest_shortest(const std::string& name_one, const std::string& name_two,
                      const std::string& name_three, std::string& the_longest,
                      std::string& the_shortest) {
  size_t len_first = name_one.length();
  size_t len_second = name_two.length();
  size_t len_third = name_three.length();
  size_t max = std::max(std::max(len_first, len_second), len_third);
  size_t min = std::min(std::min(len_first, len_second), len_third);
  if (max == name_one.length()) {
    the_longest = name_one;
  } else if (max == name_two.length()) {
    the_longest = name_two;
  } else {
    the_longest = name_three;
  }
  if (min == name_one.length()) {
    the_shortest = name_one;
  } else if (min == name_two.length()) {
    the_shortest = name_two;
  } else {
    the_shortest = name_three;
  }
}

// Task 8.
std::string sub_str(const std::string& word, int m, int n) {
    std::string new_word = "";
    if (n > static_cast<int>(word.length())){
      n = static_cast<int>(word.size())-1;
    }
    for (int i = m; i <= n; i++){
      new_word += word[i];
    }
    return new_word;
}

// Task 9.
void add_stars(std::string& word) {
    int word_length = word.length();
    std::string star_string(word_length, '*');
    word.insert(0, star_string);
    word.append(star_string);
}

// Task 10.
int percent_of_a(const std::string& word) {
  int a_counter = 0;
  for (size_t i = 0; i < word.length(); i++){
    if (word[i] == 'a')
      a_counter++;
  }
 return (a_counter * 100) / static_cast<int>(word.length());
}

// Task 11.
std::string replace_can(const std::string& new_word) {
    std::string can_string = "Can you can a can as a canner can can a can?";
    std::string to_replace_string = "can";
    size_t pos = 0;
    while ((pos = can_string.find(to_replace_string, pos)) != std::string::npos)
    {
      can_string.replace(pos, to_replace_string.size(), new_word);
      pos += new_word.size();
    }
    return can_string;
}
