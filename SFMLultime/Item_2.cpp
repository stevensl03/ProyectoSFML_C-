#include "Item_2.h"


Item2::Item2() {

	_texture.loadFromFile("imagenes/cristalVida.png");
	_sprite.setTexture(_texture);
	_sprite.setOrigin(_sprite.getGlobalBounds().width / 2, _sprite.getGlobalBounds().height);


}

void Item2::update() {
}

void Item2::draw(RenderTarget& target, RenderStates states) const {
	target.draw(_sprite, states);
}

void Item2::respawn() {
	_sprite.setPosition(std::rand() % (WIDTH - 100) + _sprite.getGlobalBounds().width, std::rand() % (HEIGHT - 100) + _sprite.getGlobalBounds().width);
}

FloatRect Item2::getBounds() const
{
	return _sprite.getGlobalBounds();
}


