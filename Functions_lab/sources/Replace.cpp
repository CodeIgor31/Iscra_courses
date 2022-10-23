// Copyright 2021 Your Name <your_email>

#include <lab05.hpp>

std::string replace(const std::string& str, const std::string& old,
                    const std::string& new_string) {
  size_t pos = 0;
  std::string str_ret = str;
  while ((pos = str.find(old, pos)) != std::string::npos) {
    str_ret.replace(pos, old.size(), new_string);
    pos += new_string.size();
  }
  return str_ret;
}
