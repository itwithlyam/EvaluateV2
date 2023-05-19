#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <regex>

#include "util.h"

std::string readFile(std::string filename)
{
  std::ifstream input(filename);
  std::stringstream sstr;

  while(input >> sstr.rdbuf());

  return sstr.str();
}

std::vector<std::string> split(const std::string& s) {
  std::vector<std::string> elems;

  std::regex re("([\"]|[^\"\\s]+)");

  std::sregex_token_iterator iter(s.begin(), s.end(), re);
  std::sregex_token_iterator end;

  while (iter != end) {
    if (iter->length()) {
      elems.push_back(*iter);
    }
    ++iter;
  }

  return elems;
}