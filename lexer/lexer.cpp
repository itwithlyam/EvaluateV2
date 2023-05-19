#include <string>
#include <vector>
#include "lexer.h"
#include "../util.h"
#include <iostream>

std::vector<Token> Lexer(std::string input) {
	std::cout << "Beginning Lexer Process\n";

	std::vector<std::string> wordVector = split(input);
	std::vector<Token> tokens;

	bool str = false;
	std::string c_str;

		for (auto it = wordVector.begin(); it != wordVector.end(); it++) {
		if (*it == "\"") {
			if (str == true) { 
				tokens.push_back(Token(STRING,c_str));
				c_str = "";
				str = false;
			} else { 
				str = true;
			}
		} else if (str == true) {
			c_str.append(*it+" ");
		} else if (*it == "\n") {
			tokens.push_back(Token(NEWLINE, "\\n"));
		} else if (*it == "(") {
			tokens.push_back(Token(BRACKET_OPEN, *it));
		} else if (*it == ")") {
			tokens.push_back(Token(BRACKET_CLOSE, *it));
		} else {
			tokens.push_back(Token(TERM,*it));
		}	
	}


	return tokens;
}