#pragma once

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include "config.h"
#include "Collisionable.h"


using namespace sf;

class Personaje: public Drawable, public Collisionable{

	Sprite _sprite;
	Texture _texture;
	Vector2f _velocity;

	SoundBuffer bufferDaño;
	Sound sonidoDaño;

public:

	void addVelocity(float velocity);
	Personaje();
	void respawn();
	void update();
	void draw(RenderTarget& target, RenderStates states)const override;
	FloatRect getBounds() const override;

	void hited();
};

