#pragma once
#include "Tiles.h"

class DLScore: public Tiles
{
public:
	sf::RenderWindow *window;
	DLScore(sf::RenderWindow *window);
	~DLScore();
};

