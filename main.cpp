#include <iostream>
#include "./lexer/lexer.h"
#include <vector>
#include "./util.h"

int main() {
  std::cout << "New compiler thing fun\n";
	std::string program = readFile("program.txt");
	std::vector<std::string> Tokens = lexer(program);
	Tokens.shrink_to_fit();
	std::cout << "\nVector elements are: ";
	for (auto it = Tokens.begin(); it != Tokens.end(); it++)
			std::cout << *it << " ";
}


