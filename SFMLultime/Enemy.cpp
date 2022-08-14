#include "Enemy.h"



Enemy::Enemy() {

	_timeRespawn = 0;
	_texture.loadFromFile("imagenes/enemy.png");
	_sprite.setTexture(_texture);
	_sprite.setOrigin(_sprite.getGlobalBounds().width / 2, _sprite.getGlobalBounds().height);

	_bufferRisa.loadFromFile("sonidos/enemy.wav");
	_sonidoRisa.setBuffer(_bufferRisa);


}

void Enemy::update(){
	_timeRespawn--;
	if (_timeRespawn < 0) {
		_timeRespawn = 60;
		_newPosition = { std::rand() % (WIDTH - 150) + _sprite.getGlobalBounds().width, std::rand() % (HEIGHT - 150) + _sprite.getGlobalBounds().width };
	}

	if (_newPosition.x > _sprite.getPosition().x) {
		_sprite.move(5,0);
	}

	if (_newPosition.x < _sprite.getPosition().x) {
		_sprite.move(-5, 0);
	}

	if (_newPosition.y > _sprite.getPosition().y) {
		_sprite.move(0, 5);
	}

	if (_newPosition.y < _sprite.getPosition().y) {
		_sprite.move(0, -5);
	}

}

void Enemy::draw(RenderTarget& target, RenderStates states) const {
	target.draw(_sprite, states);
}

void Enemy::respawn() {
	_sprite.setPosition(std::rand() % (WIDTH-150) + _sprite.getGlobalBounds().width, std::rand() % (HEIGHT-150) + _sprite.getGlobalBounds().width);
	_timeRespawn = 60 * 5;
}

void Enemy::youDamage(){
	_sonidoRisa.play();
	respawn();
}

FloatRect Enemy::getBounds() const
{
	return _sprite.getGlobalBounds();
}