#include <string>
#include "lexer.h"
#include <regex>
#include <iostream>
#include <vector>


std::vector<std::string> lexer(std::string input) {
	std::vector<std::string> wordVector;
	std::stringstream stringStream(input);
	std::string line;
	while(std::getline(stringStream, line)) 
	{
	    std::size_t prev = 0, pos;
	    while ((pos = line.find_first_of("';", prev)) != std::string::npos)
	    {
	        if (pos > prev)
	            wordVector.push_back(line.substr(prev, pos-prev));
	        prev = pos+1;
	    }
	    if (prev < line.length())
	        wordVector.push_back(line.substr(prev, std::string::npos));
		return wordVector;
	}
}


