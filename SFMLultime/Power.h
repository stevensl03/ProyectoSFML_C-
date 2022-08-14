#pragma once
#include <SFML/Graphics.hpp>
#include "config.h"
#include "Collisionable.h"

using namespace sf;

class Power : public Drawable, public Collisionable {
	Sprite _sprite;
	Texture _texture;

public:


	Power();
	void update();
	void draw(RenderTarget& target, RenderStates states)const override;
	void respawn();
	FloatRect getBounds()const override;

};

