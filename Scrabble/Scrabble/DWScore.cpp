#include "DWScore.h"

DWScore::DWScore(sf::RenderWindow *window): Tiles(window)
{
	if (!texture.loadFromFile("DoubleWord.png"))
	{
		//error...
	}
	sprite.setTexture(texture);
}


DWScore::~DWScore()
{
}
