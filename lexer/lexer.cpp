#include <string>
#include <vector>
#include "lexer.h"
#include "../util.h"
#include <iostream>

std::vector<Token> Lexer(std::string input) {
	std::cout << "Beginning Lexer Process\n";

	std::vector<std::string> wordVector = split(input);
	std::vector<Token> tokens;

		for (auto it = wordVector.begin(); it != wordVector.end(); it++) {
			std::cout << *it << "\n";
		if (*it == "\"") {
			tokens.push_back(Token(0,*it));
		} else {
			tokens.push_back(Token(1,*it));
		}	
	}


	return tokens;
}