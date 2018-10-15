#ifndef NPC_H
#define NPC_H

#include <iostream>
#include "Character.h"

using namespace std;

class NPC : public Character
{
	sf::Image* m_spriteSheetNPC = &m_spriteSheet;
	sf::Texture m_npcTexture;
	sf::Sprite m_npcSprite;
	bool m_normalMove;
public:
	NPC();
	~NPC();
	void initialize();
	void update();
	void draw(sf::RenderWindow &t_window);
	void setSprite();
	void changeMove();
	sf::Sprite getSprite() { return m_npcSprite; };
};
#endif