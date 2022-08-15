#pragma once

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include "config.h"
#include "Collisionable.h"
#include "ControllerManager.h"
#include "MyEntity.h"
#include "Proyectil.h"

using namespace sf;

enum class PersonajeState {
	Idle = 0,
	MoveUp,
	MoveDown,
	Move
};

class Personaje: public MyEntity{

	Vector2f _velocity;
	SoundBuffer _bufferDaño;
	Sound _sonidoDaño;

	

	Vector2f _movePosition = { 0, 0 };
	float _frame;
	PersonajeState _state = PersonajeState::Idle;

public:
	Proyectil* proyectil;


	void addVelocity(float velocity);
	void setVelocity(float velocity);

	Personaje();
	void respawn();
	void cmdComandos(ControllerManager &controller);
	
	void update();
	void draw(RenderTarget& target, RenderStates states)const override;
	FloatRect getBounds() const override;

	void hited();
};

