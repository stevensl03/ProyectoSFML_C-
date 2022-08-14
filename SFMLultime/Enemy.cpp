#include "Enemy.h"



Enemy::Enemy() {

	_timeRespawn = 0;
	_texture.loadFromFile("imagenes/enemy.png");
	_sprite.setTexture(_texture);
	_sprite.setOrigin(_sprite.getGlobalBounds().width / 2, _sprite.getGlobalBounds().height);

	bufferRisa.loadFromFile("");
	sonidoRisa.setBuffer(bufferRisa);


}

void Enemy::update(){
	_timeRespawn--;
	if (_timeRespawn < 0) {
		respawn();
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
	respawn();
}

FloatRect Enemy::getBounds() const
{
	return _sprite.getGlobalBounds();
}