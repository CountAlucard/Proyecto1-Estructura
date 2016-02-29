#include "Board.h"


Board::Board(sf::RenderWindow *window)
{
	
}

void Board::DrawBoard(sf::RenderWindow *window, int num)
{
	sf::Sprite board[15][15], sprite[3], spriteDl[3], spriteDw[3], spriteTl[3], spriteTw[3], spriteStar[3];
	sf::Texture tiles, random[3], randomDl[3], randomDw[3], randomTl[3], randomTw[3], randomStar[3];
	DLScore ds(window);
	TLScore ts(window);
	DWScore dw(window);
	TWScore tw(window);
	int x = 100;
	int y = 100;
	random[0].loadFromFile("letter.png");
	random[1].loadFromFile("bletter.png");
	random[2].loadFromFile("brletter.png");
	randomDl[0].loadFromFile("DoubleLetter.png");
	randomDl[1].loadFromFile("bDoubleLetter.png");
	randomDl[2].loadFromFile("brDoubleLetter.png");
	randomDw[0].loadFromFile("DoubleWord.png");
	randomDw[1].loadFromFile("bDoubleWord.png");
	randomDw[2].loadFromFile("brDoubleWord.png");
	randomTl[0].loadFromFile("TripleLetter.png");
	randomTl[1].loadFromFile("bTripleLetter.png");
	randomTl[2].loadFromFile("brTripleLetter.png");
	randomTw[0].loadFromFile("TripleWord.png");
	randomTw[1].loadFromFile("bTripleWord.png");
	randomTw[2].loadFromFile("brTripleWord.png");
	randomStar[0].loadFromFile("CenterStar.png");
	randomStar[1].loadFromFile("bCenterStar.png");
	randomStar[2].loadFromFile("brCenterStar.png");
	sprite[0].setTexture(random[0]);
	sprite[1].setTexture(random[1]);
	sprite[2].setTexture(random[2]);
	spriteDl[0].setTexture(randomDl[0]);
	spriteDl[1].setTexture(randomDl[1]);
	spriteDl[2].setTexture(randomDl[2]);
	spriteDw[0].setTexture(randomDw[0]);
	spriteDw[1].setTexture(randomDw[1]);
	spriteDw[2].setTexture(randomDw[2]);
	spriteTl[0].setTexture(randomTl[0]);
	spriteTl[1].setTexture(randomTl[1]);
	spriteTl[2].setTexture(randomTl[2]);
	spriteTw[0].setTexture(randomTw[0]);
	spriteTw[1].setTexture(randomTw[1]);
	spriteTw[2].setTexture(randomTw[2]);
	spriteStar[0].setTexture(randomStar[0]);
	spriteStar[1].setTexture(randomStar[1]);
	spriteStar[2].setTexture(randomStar[2]);

	if (!tiles.loadFromFile("CenterStar.png"))
	{
		// error...
	}
	for (int i = 0; i < 15; i++)
	{
		board[i][0] = sprite[num];
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
				board[i][j] = spriteDl[num];
			}
			else if(i == 1 && (j == 5 || j == 9) ||
					i == 5 && (j == 1 || j == 5 || j == 9|| j == 13) ||
					i == 9 && (j == 1 || j == 5 || j == 9 || j == 13) ||
					i == 13 && (j == 5 || j == 9))
			{
				board[i][j] = spriteTl[num];
			}
			else if(i == 0 && (j == 0 || j == 7 || j == 14) ||
					i == 7 && (j == 0 || j == 14) ||
					i == 14 && (j == 0 || j == 7 || j == 14))
			{
				board[i][j] = spriteTw[num];
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
				board[i][j] = spriteDw[num];
			}
			else if(i == 7 && j == 7)
			{
				board[i][j] = spriteStar[num];
			}
			else
			{
				board[i][j] = sprite[num];
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
