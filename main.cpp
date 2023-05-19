#include <iostream>
#include "./lexer/lexer.h"
#include <vector>
#include "./util.h"

int main() {
	std::string code = readFile("program.txt");
	std::vector<Token> tokens = Lexer(code);
	std::cout << "Printing tokens...\n";
  for (auto it = begin (tokens); it != end (tokens); ++it) {
		std::cout << it->getType() << ": " << it->getContent() << std::endl;
}
}


