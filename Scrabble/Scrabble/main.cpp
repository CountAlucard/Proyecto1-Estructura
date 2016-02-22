#include <SFML/Graphics.hpp>
#include "Game.h"

sf::RenderWindow window(sf::VideoMode(1600, 1024), "Scrabble - The Game");
Game game(&window);

int main() {
	
	game.playGame(&window);
	int temp = 4;
	int *mypointer = &temp;
	*mypointer = 9;
	printf("The value is: %d", temp);

}
