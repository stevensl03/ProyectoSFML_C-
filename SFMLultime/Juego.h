#pragma once

#include <SFML/Graphics.hpp>
#include "Personaje.h"

using namespace sf;

class Juego {

	RenderWindow* ventana;
	Event* eventos;
	Personaje sonic;

	bool running;
	float fps;

public:

	Juego(int width, int  height, std::string title);


	void gameLoop();
	void procedorEventos();
	void dibujar();

};
