#include <Player.h>

Player::Player() { initialize(); };
Player::~Player(){};

void Player::initialize()
{
	setSprite();
	cout << "Player initialize" << endl;
}

void Player::update()
{
	if (m_normalMove)
	{
		m_position.x++;
	}
	else
	{
		m_position.x--;
	}
	m_playerSprite.setPosition(m_position);
}
void Player::draw(sf::RenderWindow &t_window)
{
	t_window.draw(m_playerSprite);
	cout << "Player drawing" << endl;
}

void Player::setSprite()
{
	m_playerTexture.loadFromFile("MERGERMERN.png");
	m_playerSprite.setTexture(m_playerTexture);
	m_playerSprite.setPosition(sf::Vector2f(10,300));
}

void Player::changeMove()
{
	m_normalMove = false;
}