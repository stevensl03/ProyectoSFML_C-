#pragma once

#include <SFML/Graphics.hpp>
#include "config.h"
#include "Collisionable.h"
#include "MyEntity.h"



	using namespace sf;

	class Item2 : public MyEntity {

	public:
		Item2();
		void update();
		void draw(RenderTarget& target, RenderStates states)const override;
		void respawn();
		FloatRect getBounds()const override;

	};


