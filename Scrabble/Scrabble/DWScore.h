#pragma once
#include "Tiles.h"

class DWScore: public Tiles
{
public:
	sf::RenderWindow *window;
	DWScore(sf::RenderWindow *window);
	~DWScore();
};

