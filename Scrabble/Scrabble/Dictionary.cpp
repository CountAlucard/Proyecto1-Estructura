#include "Dictionary.h"

Dictionary::Dictionary()
{
}

void Dictionary::ValidateWord(std::string word)
{
	bool found = false;
	char upper = toupper(word[0]);
	std::stringstream ss;
	std::string s;
	ss << upper;
	ss >> s;

	std::ifstream infile(s + " Words.txt");

	if(infile.is_open())
	{
		std::cout << "File opened successfully!" << std::endl;
		std::string wrd;
		while (!infile.eof()) {
			infile >> wrd;
			if (wrd == word) {
				std::cout << "Word has been found!" << std::endl;
				found = true;
				break;
			}
			else {
				found = false;
			}
		}
		if (found == false) {
			std::cout << "The word was not found." << std::endl;
		}
	}
}


Dictionary::~Dictionary()
{
}
