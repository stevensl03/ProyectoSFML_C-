#include "Proyectil.h"

Proyectil::Proyectil()
{
	_timerRespawn = 1;
	_texture.loadFromFile("imagenes/proyectil.png");
	_sprite.setTexture(_texture);
	_sprite.setTextureRect({ 0,1284,123,76 });
	_sprite.setOrigin(_sprite.getGlobalBounds().width / 2, _sprite.getGlobalBounds().height);

	_bufferElect.loadFromFile("sonidos/electri.wav");
	_sonidoElect.setBuffer(_bufferElect);
	_sonidoElect.setVolume(30.f);
}

void Proyectil::update(sf::Vector2i posicionMouse)
{

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
        _sprite.move(0.f, -10.f);
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){
		_sprite.move(0.f, 10.f);
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
		_sprite.move(10.f, 0.f);
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
		_sprite.move(-10.f, 0.f);
    }
}

void Proyectil::respawn(sf::Sprite sprite)
{
	_sprite.setPosition(sprite.getPosition().x,sprite.getPosition().y);
}

void Proyectil::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(_sprite, states);
}

sf::FloatRect Proyectil::getBounds() const
{
	return _sprite.getGlobalBounds();
}
