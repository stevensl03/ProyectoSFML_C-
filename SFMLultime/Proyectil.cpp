#include "Proyectil.h"

Proyectil::Proyectil()
{
	_texture.loadFromFile("imagenes/proyectil.png");
	_sprite.setTexture(_texture);
	_sprite.setTextureRect({ 0,1284,123,76 });
	_sprite.setOrigin(_sprite.getGlobalBounds().width / 2, _sprite.getGlobalBounds().height);
}

void Proyectil::update()
{
}

void Proyectil::respawn()
{
}

void Proyectil::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(_sprite, states);
}

sf::FloatRect Proyectil::getBounds() const
{
	return _sprite.getGlobalBounds();
}
