#include "TLScore.h"

TLScore::TLScore(sf::RenderWindow *window) : Tiles(window)
{
	if (!texture.loadFromFile("TripleLetter.png"))
	{
		//error...
	}
	sprite.setTexture(texture);
}


TLScore::~TLScore()
{
}
