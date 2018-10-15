#ifndef CHARACTER_H
#define CHARACTER_H

#include <SFML/Graphics.hpp>
class Character
{
	
public:
	sf::Image m_spriteSheet;
	Character();
	~Character();
	void initialize();
	void update();
	void draw();
	virtual void setSprite() { ; }; 
};
#endif