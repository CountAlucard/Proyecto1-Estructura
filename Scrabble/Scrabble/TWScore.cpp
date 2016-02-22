#include "TWScore.h"



TWScore::TWScore(sf::RenderWindow *window): Tiles(window)
{
	if (!texture.loadFromFile("TripleWord.png"))
	{
		//error...
	}
	sprite.setTexture(texture);
}


TWScore::~TWScore()
{
}
