#include "Board.h"


Board::Board(sf::RenderWindow *window)
{
	
}

void Board::DrawBoard(sf::RenderWindow *window)
{
	sf::Sprite board[15][15];
	sf::Texture tiles, random[3];
	DLScore ds(window);
	TLScore ts(window);
	DWScore dw(window);
	TWScore tw(window);
	int x = 100;
	int y = 100;
	random[0].loadFromFile("letter.png");
	random[1].loadFromFile("bletter.png");
	random[2].loadFromFile("brletter.png");

	if (!tiles.loadFromFile("CenterStar.png"))
	{
		// error...
	}
	for (int i = 0; i < 15; i++)
	{
		board[i][0].setTexture(random[rand() % 2 + 0]);
		board[i][0].setPosition(x, y);

		for (int j = 0; j < 15; j++)
		{
			if(i == 0 && (j == 3 || j == 11) ||
				i == 2 && (j == 6 || j == 8) ||
				i == 3 && (j == 0 || j == 7 || j == 14) ||
				i == 6 && (j == 2 || j == 6 || j == 8 || j == 12 )||
				i == 7 && (j == 3 || j == 11) ||
				i == 8 && (j == 2 || j == 6 || j == 8 || j == 12 )|| 
				i == 11 && (j == 0 || j == 7 || j == 14 )|| 
				i == 12 && (j == 6 || j == 8 )|| 
				i == 14 && (j == 3 || j == 11))
			{
				board[i][j].setTexture(ds.texture);
			}
			else if(i == 1 && (j == 5 || j == 9) ||
					i == 5 && (j == 1 || j == 5 || j == 9|| j == 13) ||
					i == 9 && (j == 1 || j == 5 || j == 9 || j == 13) ||
					i == 13 && (j == 5 || j == 9))
			{
				board[i][j].setTexture(ts.texture);
			}
			else if(i == 0 && (j == 0 || j == 7 || j == 14) ||
					i == 7 && (j == 0 || j == 14) ||
					i == 14 && (j == 0 || j == 7 || j == 14))
			{
				board[i][j].setTexture(tw.texture);
			}
			else if (i == 1 && (j == 1 || j == 13) ||
				i == 2 && (j == 2 || j == 12) ||
				i == 3 && (j == 3 || j == 11) ||
				i == 4 && (j == 4 || j == 10) ||
				i == 10 && (j == 4 || j == 10) ||
				i == 11 && (j == 3 || j == 11) ||
				i == 12 && (j == 2 || j == 12) ||
				i == 13 && (j == 1 || j == 13))
			{
				board[i][j].setTexture(dw.texture);
			}
			else if(i == 7 && j == 7)
			{
				board[i][j].setTexture(tiles);
			}
			else
			{
				board[i][j].setTexture(random[rand() % 2 + 0]);
			}
			board[i][j].setPosition(x,y);
			window->draw(board[i][j]);
			x += 50;
		}
		x = 100;
		y += 50;
	}
}

Board::~Board()
{
}
