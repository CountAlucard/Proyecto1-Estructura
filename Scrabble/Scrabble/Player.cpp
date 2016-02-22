#include "Player.h"

Player::Player(std::string newName)
{
	name = newName;
	score = 0;
	tiles = 7;
}

int Player::getScore() const
{
	return score;
}

void Player::setScore(int newScore)
{
	score += newScore;
}

void Player::assignTiles(sf::RenderWindow* window)
{
	
}

Player::~Player()
{
}
