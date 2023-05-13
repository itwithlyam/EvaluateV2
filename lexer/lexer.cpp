#include <string>
#include "lexer.h"
#include <regex>
#include <iostream>
#include <vector>


std::vector<std::string>* lexer(std::string input) {
	std::vector<std::string> wordVector;
	std::stringstream stringStream(input);
	std::string line;
	
	while(std::getline(stringStream, line)) 
	{
	    std::size_t prev = 0, pos;
	    while ((pos = line.find_first_of(" ';\"", prev)) != std::string::npos)
	    {
	        if (pos > prev)
	            wordVector.push_back(line.substr(prev, pos-prev));
	        prev = pos+1;
	    }
	    if (prev < line.length())
	        wordVector.push_back(line.substr(prev, std::string::npos));

	}

		for (auto it = wordVector.begin(); it != wordVector.end(); it++) {
			std::cout << *it << "\n";
		}
	
	std::vector<std::string> tokentable;
	std::vector<std::string> tokencontent;

	for (auto it = wordVector.begin(); it != wordVector.end(); it++) {
		if (it->compare("\"") == 0) {
			tokentable.push_back("1");
			tokencontent.push_back("\"");
		} else {
			std::cout << "yes";
			tokentable.push_back("0");
			tokencontent.push_back(*it);
			std::cout << tokentable.size();
		}
	}

	std::vector<std::string> ret[2];
	ret[0] = tokentable;
	ret[1] = tokencontent;
	
	return &ret[0];
}


