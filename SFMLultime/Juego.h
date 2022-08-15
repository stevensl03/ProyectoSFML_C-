#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <stdlib.h>
#include <ctime>
#include "config.h"
#include "Animacion.h"
#include "ControllerManager.h"
#include "Personaje.h"
#include "Item.h"
#include "Power.h"
#include "Enemy.h"

using namespace sf;

class Juego {

	Animacion animacion;

	ControllerManager controller;

	RenderWindow* ventana;
	Event* eventos;

	Font font;
	Text textPuntos, textVidas, textMensaje;

	Texture fondo_text;
	Sprite fondo;

	Texture textMira;
	Sprite sprMira;

	SoundBuffer bufferGaseosa;
	Sound sonidoGaseosa;

	SoundBuffer bufferPower;
	Sound sonidoPower;

	Vector2i posicionMouse;

	Personaje sonic;
	Item gaseosa;
	Power aumentoVelocidad;
	Enemy enemyGolemIce;


	bool running;
	float fps;
	int puntos;
	int vidas;
	int timer;

public:

	Juego(int width, int  height, std::string title);


	void gameLoop();
	void procesarMouse();
	void procesarEventos();
	void ProcesarTexto();
	void dibujar();

};
