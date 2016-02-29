#pragma once
#include <SFML/Graphics.hpp>
#include "Tiles.h"
#include "Dictionary.h"
#include "Board.h"
#include "Player.h"
#include "Menu.h"

class Game
{
public:
	Game(sf::RenderWindow *window);
	static void playGame(sf::RenderWindow *window, int num);
	static void initPlayers(sf::Event event);
	void placeTile(Tiles *tile, Board board, int posx, int posy);
	~Game();
};

