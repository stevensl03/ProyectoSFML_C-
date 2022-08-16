#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <stdlib.h>
#include <ctime>
#include "Proyectil.h"
#include "config.h"
#include "Animacion.h"
#include "ControllerManager.h"
#include "Personaje.h"
#include "Item.h"
#include "Item_2.h"
#include "Power.h"
#include "Enemy.h"
#include "Enemy2.h"

using namespace sf;

class Juego {

	Animacion animacion;

	ControllerManager controller;

	RenderWindow* ventana;
	Event* eventos;
	//View vistaPanatalla;

	Font font;
	Text textPuntos, textVidas, textMensaje;

	Texture fondo_text;
	Sprite fondo;

	Texture textMira;
	Sprite sprMira;

	SoundBuffer bufferGaseosa;
	Sound sonidoGaseosa;

	SoundBuffer bufferVida;
	Sound sonidoVida;

	SoundBuffer bufferPower;
	Sound sonidoPower;

	SoundBuffer bufferGameOver;
	Sound sonidoGameOver;

	Music musicaFondo;

	Vector2i posicionMouse;
	Vector2i posicionMouse1;


	Personaje sonic;
	Item gaseosa;
	Item2 CristalVida;
	Power aumentoVelocidad;
	Enemy enemyGolemIce;
	Enemy2 Ghost;


	int pauseMusic;
	bool running;
	float fps;
	int puntos;
	int vidas;
	int timer;
	int timerProyectil;
	int timerVida;


public:

	Juego(int width, int  height, std::string title);


	void gameLoop();
	void procesarMouse();
	void procesarEventos();
	void ProcesarTexto();
	void dibujar();

};
