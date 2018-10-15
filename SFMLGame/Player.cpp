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
	cout << "Player updating" << endl;
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