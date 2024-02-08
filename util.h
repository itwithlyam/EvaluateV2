#include <iostream>
#include <vector>
#include <string>

#pragma once

std::string readFile(std::string filename);
std::vector<std::string> split(const std::string& s);

enum TokenType {
	STRING,
	TERM,
	NEWLINE,
	BRACKET_OPEN,
	BRACKET_CLOSE,
  ASSIGNMENT,
  EQUALS,
  BLOCK_OPEN,
  BLOCK_CLOSE
};