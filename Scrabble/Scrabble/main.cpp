#include <SFML/Graphics.hpp>
#include "Game.h"

sf::RenderWindow window(sf::VideoMode(1600, 1024), "Scrabble - The Game");
Game game(&window);

int main() {

	srand(time(nullptr));
	game.playGame(&window, 0 + rand() % 3);

}
