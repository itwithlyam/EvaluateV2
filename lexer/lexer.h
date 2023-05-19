#include <string>
#include <vector>

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

std::vector<Token> Lexer(std::string input);