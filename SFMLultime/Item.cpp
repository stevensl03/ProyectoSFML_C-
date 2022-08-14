#include "Item.h"

Item::Item(){

	_texture.loadFromFile("imagenes/gaseosa.png");
	_sprite.setTexture(_texture);
	_sprite.setOrigin(_sprite.getGlobalBounds().width / 2, _sprite.getGlobalBounds().height);
	

}

void Item::update(){
}

void Item::draw(RenderTarget& target, RenderStates states) const{
	target.draw(_sprite, states);
}

void Item::respawn(){
	_sprite.setPosition(std::rand() % (WIDTH-100) + _sprite.getGlobalBounds().width, std::rand() % (HEIGHT-100) + _sprite.getGlobalBounds().width);
}

FloatRect Item::getBounds() const
{
	return _sprite.getGlobalBounds();
}


