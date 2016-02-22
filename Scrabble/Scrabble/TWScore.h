#pragma once
#include "Tiles.h"

class TWScore: public Tiles
{
public:
	sf::RenderWindow *window;
	TWScore(sf::RenderWindow *window);
	~TWScore();
};

