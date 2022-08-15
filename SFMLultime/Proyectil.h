#pragma once
#include <SFML/Graphics.hpp>
#include "MyEntity.h"

class Proyectil : public MyEntity {

public:
	Proyectil();
	void update();
	void respawn();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
	sf::FloatRect getBounds()const override;
};

