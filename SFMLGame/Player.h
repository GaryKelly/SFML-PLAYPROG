#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include "Character.h"

using namespace std;

class Player : public Character
{
	sf::Image* m_spriteSheetPlayer = &m_spriteSheet;
	sf::Texture m_playerTexture;
	sf::Sprite m_playerSprite;
	bool m_normalMove = true;
	sf::Vector2f m_position = sf::Vector2f(10, 300);

public:
	Player();
	~Player();
	void initialize();
	void setSprite();
	void update();
	void changeMove();
	void draw(sf::RenderWindow &t_window);
	sf::Sprite getSprite() { return m_playerSprite; };
};
#endif