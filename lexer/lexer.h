#include <string>
#include <vector>
#include "../util.h"

#pragma once

class Token {
public:
	TokenType type;
	std::string content;

	Token(TokenType m_type, std::string m_content) {
		type = m_type;
		content = m_content;
	}

	Token(TokenType m_type) {
		type = m_type;
		content = "";
	}

	int getType() {
		return type;
	}

	std::string getContent() {
		return content;
	}
};

std::vector<Token> Lexer(std::string input);