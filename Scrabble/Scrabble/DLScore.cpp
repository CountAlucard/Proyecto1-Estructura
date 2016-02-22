#include "DLScore.h"

DLScore::DLScore(sf::RenderWindow *window): Tiles(window)
{
	if(!texture.loadFromFile("DoubleLetter.png"))
	{
		//error...
	}
	sprite.setTexture(texture);
}


DLScore::~DLScore()
{
}
