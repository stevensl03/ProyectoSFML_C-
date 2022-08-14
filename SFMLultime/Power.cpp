#include "Power.h"



Power::Power() {


	_texture.loadFromFile("imagenes/aumentoVelocidad.png");
	_sprite.setTexture(_texture);
	_sprite.setOrigin(_sprite.getGlobalBounds().width / 2, _sprite.getGlobalBounds().height);


}

void Power::update() {
}

void Power::draw(RenderTarget& target, RenderStates states) const {
	target.draw(_sprite, states);
}

void Power::respawn() {
	_sprite.setPosition(std::rand() % 1100 + _sprite.getGlobalBounds().width, std::rand() % 700 + _sprite.getGlobalBounds().width);
}

FloatRect Power::getBounds() const
{
	return _sprite.getGlobalBounds();
}

