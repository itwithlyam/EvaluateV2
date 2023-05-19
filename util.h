#include <iostream>
#include <vector>
#include <string>

std::string readFile(std::string filename);
std::vector<std::string> split(const std::string& s);

enum TokenType {
	STRING,
	TERM,
	NEWLINE
};