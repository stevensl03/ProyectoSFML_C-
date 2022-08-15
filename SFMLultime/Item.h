#pragma once

#include <SFML/Graphics.hpp>
#include "config.h"
#include "Collisionable.h"
#include "MyEntity.h"



using namespace sf;

class Item: public MyEntity{

public:
	Item();
	void update();
	void draw(RenderTarget& target, RenderStates states)const override;
	void respawn();
	FloatRect getBounds()const override;

};

