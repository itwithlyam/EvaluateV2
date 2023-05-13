#include <iostream>
#include "./lexer/lexer.h"
#include <vector>
#include "./util.h"

int main() {
  std::cout << "New compiler thing fun\n";
	std::string program = readFile("program.txt");
	std::vector<std::string>* Tokens = lexer(program);
	std::vector<std::string> TokenTable = *Tokens;
	std::vector<std::string> TokenContent = *(Tokens + 1);
	std::cout << "\nToken table elements are: ";
	for (auto it = TokenTable.begin(); it != TokenTable.end(); it++)
			std::cout << *it << "\n";

	std::cout << "\nToken content elements are: ";
	for (auto it = TokenContent.begin(); it != TokenContent.end(); it++)
			std::cout << *it << "\n";
}


