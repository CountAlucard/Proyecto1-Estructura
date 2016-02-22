#pragma once
#include <string>
#include <stack>
#include "Tiles.h"

class Player
{
public:
	std::string name;
	int score = 0, tiles = 0;
	std::vector<Tiles> assignedTiles;
	std::stack<Tiles> usedTiles;
	std::stack<std::string> usedWords;
	Player(std::string newName);
	int getScore() const;
	void setScore(int newScore);
	void assignTiles(sf::RenderWindow *window);
	~Player();
};

