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
	static void playGame(sf::RenderWindow *window);
	static void initPlayers(sf::Event event);
	~Game();
};

