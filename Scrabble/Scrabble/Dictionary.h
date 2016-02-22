#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

class Dictionary
{
public:
	Dictionary();
	static void ValidateWord(std::string word);
	~Dictionary();
};

