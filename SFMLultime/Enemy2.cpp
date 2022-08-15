#include "Enemy2.h"




Enemy2::Enemy2() {

	_timeRespawn = 0;
	_texture.loadFromFile("imagenes/enemy2.png");
	_sprite.setTexture(_texture);
	_sprite.setOrigin(_sprite.getGlobalBounds().width / 2, _sprite.getGlobalBounds().height);

	_bufferRisa.loadFromFile("sonidos/ghost.wav");
	_sonidoRisa.setBuffer(_bufferRisa);


}

void Enemy2::update() {
	//_timeRespawn--;
	/*if (_timeRespawn < 0) {
		_timeRespawn = 60;
		_newPosition = { std::rand() % (WIDTH - 150) + _sprite.getGlobalBounds().width, std::rand() % (HEIGHT - 150) + _sprite.getGlobalBounds().width };
	}*/

	if (_newPosition.x > _sprite.getPosition().x) {
		_sprite.move(8, 0);
	}

	if (_newPosition.x < _sprite.getPosition().x) {
		_sprite.move(-8, 0);
	}

	if (_newPosition.y > _sprite.getPosition().y) {
		_sprite.move(0, 8);
	}

	if (_newPosition.y < _sprite.getPosition().y) {
		_sprite.move(0, -8);
	}

	//correguir posicion 
	if (std::abs(_newPosition.x - _sprite.getPosition().x) <= 8) {
		_sprite.setPosition(_newPosition.x, _sprite.getPosition().y);
		_newPosition = { std::rand() % (WIDTH - 150) + _sprite.getGlobalBounds().width, std::rand() % (HEIGHT - 150) + _sprite.getGlobalBounds().width };

	}
	if (std::abs(_newPosition.y - _sprite.getPosition().y) <= 8) {
		_sprite.setPosition(_sprite.getPosition().x, _newPosition.y);
		_newPosition = { std::rand() % (WIDTH - 150) + _sprite.getGlobalBounds().width, std::rand() % (HEIGHT - 150) + _sprite.getGlobalBounds().width };

	}

}

void Enemy2::draw(RenderTarget& target, RenderStates states) const {
	target.draw(_sprite, states);
}

void Enemy2::respawn() {
	_sprite.setPosition(std::rand() % (WIDTH - 150) + _sprite.getGlobalBounds().width, std::rand() % (HEIGHT - 150) + _sprite.getGlobalBounds().width);
	_timeRespawn = 60 * 5;
}

void Enemy2::youDamage() {
	_sonidoRisa.play();
	respawn();
}

FloatRect Enemy2::getBounds() const
{
	return _sprite.getGlobalBounds();
}