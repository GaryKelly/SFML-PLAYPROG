#include <Character.h>

Character::Character(){}
Character::~Character(){}

void Character::initialize()
{
	m_spriteSheet.loadFromFile("playerCharacters.png");
}
void Character::update(){}
void Character::draw(){}