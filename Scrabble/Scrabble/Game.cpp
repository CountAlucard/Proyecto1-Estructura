#include "Game.h"

Game::Game(sf::RenderWindow *window)
{
}


Game::~Game()
{
}

void Game::playGame(sf::RenderWindow *window)
{
	Menu menu(window->getSize().x, window->getSize().y);
	Dictionary d;
	Board b(window);
	Tiles t(window);

	std::vector<Tiles> tileBag;

	t.fillBag(tileBag);

	while (window->isOpen())
	{
		sf::Event event;
		while (window->pollEvent(event))
		{

			switch (event.type)
			{
			case sf::Event::MouseMoved:
				std::cout << sf::Mouse::getPosition().x << std::endl;
				std::cout << sf::Mouse::getPosition().y << std::endl;
				break;
			case sf::Event::KeyReleased:
				switch (event.key.code)
				{
				case sf::Keyboard::Up:
					menu.MoveUp();
					break;
				case sf::Keyboard::Down:
					menu.MoveDown();
					break;
				case sf::Keyboard::Return:
					switch(menu.getPressedItem())
					{
					case 0:
						break;
					case 1:
						window->close();
					}
				}
				break;
			case sf::Event::Closed:
				window->close();
				break;
			}

		}

		window->clear();
		menu.draw(window);
		b.DrawBoard(window);
		window->display();
	}
}

void Game::initPlayers(sf::Event event)
{
	
}

