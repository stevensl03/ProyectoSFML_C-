#pragma once

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include "config.h"
#include "Collisionable.h"

using namespace sf;

class Enemy: public Drawable, public Collisionable {

	Sprite _sprite;
	Texture _texture;
	int _timeRespawn;

	SoundBuffer _bufferRisa;
	Sound _sonidoRisa;

	Vector2f _newPosition;

public:

	Enemy();
	void update();
	void draw(RenderTarget& target, RenderStates states)const override;
	void respawn();
	void youDamage();
	FloatRect getBounds()const override;

};





