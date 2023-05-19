#include <string>
#include <vector>
#include "lexer.h"
#include "../util.h"
#include <iostream>

class Token {
public:
	int type;
	std::string content;

	Token(int m_type, std::string m_content) {
		type = m_type;
		content = m_content;
	}

	int getType() {
		return type;
	}

	std::string getContent() {
		return content;
	}
};

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