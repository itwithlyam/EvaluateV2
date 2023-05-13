#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

#include "util.h"

std::string readFile(std::string filename)
{
  std::ifstream input(filename);
  std::stringstream sstr;

  while(input >> sstr.rdbuf());

  return sstr.str();
}