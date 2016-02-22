#include "Menu.h"

Menu::Menu(float width, float height)
{
	if (!font.loadFromFile("FFF_Tusj.ttf"))
	{
		//error...
	}

	text[0].setFont(font);
	text[0].setColor(sf::Color::Cyan);
	text[0].setString("Play");
	text[0].setPosition(1200,200);

	text[1].setFont(font);
	text[1].setColor(sf::Color::White);
	text[1].setString("Exit");
	text[1].setPosition(1200, 300);

	selectedItemIndex = 0;
}

Menu::~Menu()
{
}

void Menu::draw(sf::RenderWindow* window)
{
	for (int i = 0; i < MAX_NUMBER_OF_ITEMS; i++)
	{
		window->draw(text[i]);
	}
}

void Menu::MoveUp()
{
	if(selectedItemIndex - 1 >= 0)
	{
		text[selectedItemIndex].setColor(sf::Color::White);
		selectedItemIndex--;
		text[selectedItemIndex].setColor(sf::Color::Cyan);
	}
}

void Menu::MoveDown()
{
	if (selectedItemIndex + 1 < MAX_NUMBER_OF_ITEMS)
	{
		text[selectedItemIndex].setColor(sf::Color::White);
		selectedItemIndex++;
		text[selectedItemIndex].setColor(sf::Color::Cyan);
	}
}
