#include <NPC.h>

NPC::NPC() { initialize(); };
NPC::~NPC(){};

void NPC::initialize()
{
	setSprite();
	cout << "NPC initialize" << endl;
}
void NPC::update()
{
	cout << "NPC updating" << endl;
}
void NPC::draw(sf::RenderWindow &t_window)
{
	t_window.draw(m_npcSprite);
	cout << "NPC drawing" << endl;
}

void NPC::setSprite()
{
	m_npcTexture.loadFromFile("enemy.png");
	m_npcSprite.setTexture(m_npcTexture);
	m_npcSprite.setPosition(sf::Vector2f(600, 200));
}

void NPC::changeMove()
{
}
