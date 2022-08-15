#pragma once
#include <SFML/Graphics.hpp>
#include "MyEntity.h"
#include "config.h"
#include <SFML/Audio.hpp>

class Proyectil : public MyEntity {

	float _timerRespawn;
	sf::Vector2i  GuardarPosicion;
	sf::Vector2f _newPosition;



public:
	sf::SoundBuffer _bufferElect;
	sf::Sound _sonidoElect;

	Proyectil();
	void update(sf::Vector2i posicionMouse);
	void respawn(sf::Sprite sprite);
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
	sf::FloatRect getBounds()const override;
};

