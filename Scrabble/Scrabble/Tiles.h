#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include <string>

class Tiles
{
private:
	int value = 0;
	char letter = ' ';
	std::vector<Tiles> tileBag;
public:
	sf::Sprite sprite;
	sf::Texture texture;	
	Tiles(sf::RenderWindow *window);
	Tiles(sf::Sprite img, sf::Texture txtr, int value, char letter);
	void fillBag(std::vector<Tiles>& newTileBag);
	~Tiles();
};

