#pragma once

#include <SFML/Graphics.hpp>


using namespace sf;

class Personaje: public Drawable{

	Sprite _sprite;
	Texture _texture;
	Vector2f _velocity;
public:
	Personaje();

	Sprite get_sprite();
	void update();
	void draw(RenderTarget& target, RenderStates states)const override;
};

