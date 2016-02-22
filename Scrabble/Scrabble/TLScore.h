#pragma once
#include "Tiles.h"

class TLScore: public Tiles
{
public:
	sf::RenderWindow *window;
	TLScore(sf::RenderWindow *window);
	~TLScore();
};

