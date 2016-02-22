#include "Tiles.h"

Tiles::Tiles(sf::RenderWindow* window)
{
}

Tiles::Tiles(sf::Sprite img, sf::Texture txtr, int newValue, char newLetter)
{
	sprite = img;
	texture = txtr;
	value = newValue;
	letter = newLetter;
}

void Tiles::fillBag(std::vector<Tiles>& newTileBag)
{
	sf::Sprite spr;
	sf::Texture txr;
	int nVal;
	char nLet;

	for (int i = 0; i < 100; i++)
	{
		nVal = rand() % 10 + 1;

		if(i<12)
		{
			nLet = 'E';
			if (!txr.loadFromFile("letter_E.png"))
			{
				// error...
			}
			spr.setTexture(txr);
			Tiles nTile(spr, txr, nVal, nLet);
			newTileBag.push_back(nTile);
		}
		if(i > 11 && i < 21)
		{
			nLet = 'A';
			if (!txr.loadFromFile("letter_A.png"))
			{
				// error...
			}
			spr.setTexture(txr);
			Tiles nTile(spr, txr, nVal, nLet);
			newTileBag.push_back(nTile);
		}
		if (i > 20 && i < 30)
		{
			nLet = 'I';
			if (!txr.loadFromFile("letter_I.png"))
			{
				// error...
			}
			spr.setTexture(txr);
			Tiles nTile(spr, txr, nVal, nLet);
			newTileBag.push_back(nTile);
		}
		if (i > 29 && i < 38)
		{
			nLet = 'O';
			if (!txr.loadFromFile("letter_O.png"))
			{
				// error...
			}
			spr.setTexture(txr);
			Tiles nTile(spr, txr, nVal, nLet);
			newTileBag.push_back(nTile);
		}
		if (i > 37 && i < 44)
		{
			nLet = 'N';
			if (!txr.loadFromFile("letter_N.png"))
			{
				// error...
			}
			spr.setTexture(txr);
			Tiles nTile(spr, txr, nVal, nLet);
			newTileBag.push_back(nTile);
		}
		if (i > 43 && i < 50)
		{
			nLet = 'R';
			if (!txr.loadFromFile("letter_R.png"))
			{
				// error...
			}
			spr.setTexture(txr);
			Tiles nTile(spr, txr, nVal, nLet);
			newTileBag.push_back(nTile);
		}
		if (i > 49 && i < 56)
		{
			nLet = 'T';
			if (!txr.loadFromFile("letter_T.png"))
			{
				// error...
			}
			spr.setTexture(txr);
			Tiles nTile(spr, txr, nVal, nLet);
			newTileBag.push_back(nTile);
		}
		if (i > 55 && i < 60)
		{
			nLet = 'L';
			if (!txr.loadFromFile("letter_L.png"))
			{
				// error...
			}
			spr.setTexture(txr);
			Tiles nTile(spr, txr, nVal, nLet);
			newTileBag.push_back(nTile);
		}
		if (i > 59 && i < 64)
		{
			nLet = 'S';
			if (!txr.loadFromFile("letter_S.png"))
			{
				// error...
			}
			spr.setTexture(txr);
			Tiles nTile(spr, txr, nVal, nLet);
			newTileBag.push_back(nTile);
		}
		if (i > 63 && i < 68)
		{
			nLet = 'U';
			if (!txr.loadFromFile("letter_U.png"))
			{
				// error...
			}
			spr.setTexture(txr);
			Tiles nTile(spr, txr, nVal, nLet);
			newTileBag.push_back(nTile);
		}
		if (i > 67 && i < 72)
		{
			nLet = 'D';
			if (!txr.loadFromFile("letter_D.png"))
			{
				// error...
			}
			spr.setTexture(txr);
			Tiles nTile(spr, txr, nVal, nLet);
			newTileBag.push_back(nTile);
		}
		if (i > 71 && i < 75)
		{
			nLet = 'G';
			if (!txr.loadFromFile("letter_G.png"))
			{
				// error...
			}
			spr.setTexture(txr);
			Tiles nTile(spr, txr, nVal, nLet);
			newTileBag.push_back(nTile);
		}
		if (i > 74 && i < 77)
		{
			nLet = 'B';
			if (!txr.loadFromFile("letter_B.png"))
			{
				// error...
			}
			spr.setTexture(txr);
			Tiles nTile(spr, txr, nVal, nLet);
			newTileBag.push_back(nTile);
		}
		if (i > 76 && i < 79)
		{
			nLet = 'C';
			if (!txr.loadFromFile("letter_C.png"))
			{
				// error...
			}
			spr.setTexture(txr);
			Tiles nTile(spr, txr, nVal, nLet);
			newTileBag.push_back(nTile);
		}
		if (i > 78 && i < 81)
		{
			nLet = 'M';
			if (!txr.loadFromFile("letter_M.png"))
			{
				// error...
			}
			spr.setTexture(txr);
			Tiles nTile(spr, txr, nVal, nLet);
			newTileBag.push_back(nTile);
		}
		if (i > 80 && i < 83)
		{
			nLet = 'P';
			if (!txr.loadFromFile("letter_P.png"))
			{
				// error...
			}
			spr.setTexture(txr);
			Tiles nTile(spr, txr, nVal, nLet);
			newTileBag.push_back(nTile);
		}
		if (i > 82 && i < 85)
		{
			nLet = 'F';
			if (!txr.loadFromFile("letter_F.png"))
			{
				// error...
			}
			spr.setTexture(txr);
			Tiles nTile(spr, txr, nVal, nLet);
			newTileBag.push_back(nTile);
		}
		if (i > 84 && i < 87)
		{
			nLet = 'H';
			if (!txr.loadFromFile("letter_H.png"))
			{
				// error...
			}
			spr.setTexture(txr);
			Tiles nTile(spr, txr, nVal, nLet);
			newTileBag.push_back(nTile);
		}
		if (i > 86 && i < 89)
		{
			nLet = 'V';
			if (!txr.loadFromFile("letter_V.png"))
			{
				// error...
			}
			spr.setTexture(txr);
			Tiles nTile(spr, txr, nVal, nLet);
			newTileBag.push_back(nTile);
		}
		if (i > 88 && i < 91)
		{
			nLet = 'W';
			if (!txr.loadFromFile("letter_W.png"))
			{
				// error...
			}
			spr.setTexture(txr);
			Tiles nTile(spr, txr, nVal, nLet);
			newTileBag.push_back(nTile);
		}
		if (i > 90 && i < 93)
		{
			nLet = 'Y';
			if (!txr.loadFromFile("letter_Y.png"))
			{
				// error...
			}
			spr.setTexture(txr);
			Tiles nTile(spr, txr, nVal, nLet);
			newTileBag.push_back(nTile);
		}
		if (i > 92 && i < 94)
		{
			nLet = 'K';
			if (!txr.loadFromFile("letter_K.png"))
			{
				// error...
			}
			spr.setTexture(txr);
			Tiles nTile(spr, txr, nVal, nLet);
			newTileBag.push_back(nTile);
		}
		if (i > 93 && i < 95)
		{
			nLet = 'J';
			if (!txr.loadFromFile("letter_J.png"))
			{
				// error...
			}
			spr.setTexture(txr);
			Tiles nTile(spr, txr, nVal, nLet);
			newTileBag.push_back(nTile);
		}
		if (i > 94 && i < 96)
		{
			nLet = 'X';
			if (!txr.loadFromFile("letter_X.png"))
			{
				// error...
			}
			spr.setTexture(txr);
			Tiles nTile(spr, txr, nVal, nLet);
			newTileBag.push_back(nTile);
		}
		if (i > 95 && i < 97)
		{
			nLet = 'Q';
			if (!txr.loadFromFile("letter_Q.png"))
			{
				// error...
			}
			spr.setTexture(txr);
			Tiles nTile(spr, txr, nVal, nLet);
			newTileBag.push_back(nTile);
		}
		if (i > 96 && i < 98)
		{
			nLet = 'Z';
			if (!txr.loadFromFile("letter_Z.png"))
			{
				// error...
			}
			spr.setTexture(txr);
			Tiles nTile(spr, txr, nVal, nLet);
			newTileBag.push_back(nTile);
		}
		if (i > 97 && i < 100)
		{
			nLet = ' ';
			if (!txr.loadFromFile("letter.png"))
			{
				// error...
			}
			spr.setTexture(txr);
			Tiles nTile(spr, txr, nVal, nLet);
			newTileBag.push_back(nTile);
		}
	}

}

Tiles::~Tiles()
{
}
