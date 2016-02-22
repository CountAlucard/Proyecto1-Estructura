#pragma once
#include <SFML/Graphics.hpp>
#include "Tiles.h"
#include "DLScore.h"
#include "TLScore.h"
#include "DWScore.h"
#include "TWScore.h"

class Board
{
public:
	explicit Board(sf::RenderWindow *window);
	static void DrawBoard(sf::RenderWindow *window);
	~Board();
};

