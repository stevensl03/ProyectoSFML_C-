#include "Juego.h"


Juego::Juego(int width, int height, std::string title) {

	ventana = new RenderWindow(VideoMode(width, height), title);
	eventos = new Event;

	//Fuente
	font.loadFromFile("fuente1.ttf");
	//texto
	textPuntos.setFont(font);
	textPuntos.setPosition(10, 0);
	textPuntos.setFillColor(Color::Red);

	textVidas.setFont(font);
	textVidas.setPosition(10,textPuntos.getGlobalBounds().height+40);

	textMensaje.setFont(font);
	textMensaje.setOrigin(textMensaje.getGlobalBounds().width / 2, textMensaje.getGlobalBounds().height/2);
	textMensaje.setPosition(WIDTH*0.38, HEIGHT*0.28);
	textMensaje.setScale(2,2);
	textMensaje.setFillColor(Color::Red);




	//sonidos
	bufferGaseosa.loadFromFile("sonidos/bebida.wav");
	sonidoGaseosa.setBuffer(bufferGaseosa);

	bufferPower.loadFromFile("sonidos/power.wav");
	sonidoPower.setBuffer(bufferPower);




	//imagen de fondo
	fondo_text.loadFromFile("imagenes/fondo.jpg");
	fondo.setTexture(fondo_text);
	fondo.setScale((float)WIDTH / fondo.getTexture()->getSize().x,
		(float)HEIGHT / fondo.getTexture()->getSize().y);

	//inicializacion de atributos
	running = true;
	fps = 60;
	puntos = 0;
	vidas = 3;
	timer = 60 * 5;

	//fps
	ventana->setFramerateLimit(60);

	//respaws
	gaseosa.respawn();
	aumentoVelocidad.respawn();
	enemyGolemIce.respawn();

	//Bucle del juego
	gameLoop();

}

void Juego::gameLoop()
{
	while (running) {

		procesarEventos();
		ProcesarTexto();
		dibujar();
	}
}

void Juego::procesarEventos()
{
	while (ventana->pollEvent(*eventos)) {
		if (eventos->type == Event::Closed) {
			ventana->close();
		}
	}
//controllerManager
	controller.reset();

	if (Keyboard::isKeyPressed(Keyboard::Up)) {
		controller.setPress(ControllerManager::Buttons::Up);
	}

	if (Keyboard::isKeyPressed(Keyboard::Down)) {
		controller.setPress(ControllerManager::Buttons::Down);
	}

	if (Keyboard::isKeyPressed(Keyboard::Left)) {
		controller.setPress(ControllerManager::Buttons::Left);
	}

	if (Keyboard::isKeyPressed(Keyboard::Right)) {
		controller.setPress(ControllerManager::Buttons::Right);
	}
	
	//CMD -Joy

	if (vidas > 0) {

	//update - actulizar los estados del juego
		enemyGolemIce.update();
		if (timer > 0) {
			timer--;
		}

		sonic.cmdComandos(controller);
		sonic.update();

		if (sonic.isCollision(gaseosa)) {
			sonidoGaseosa.play();
			puntos++;
			gaseosa.respawn();


		}
		if (timer == 0 && sonic.isCollision(aumentoVelocidad)) {
			sonidoPower.play();
			sonic.addVelocity(1);
			timer = 60 * 5;
			aumentoVelocidad.respawn();
		}

		if (sonic.isCollision(enemyGolemIce)) {
			vidas--;
			sonic.hited();
			enemyGolemIce.youDamage();

		}
	}
	else {
		if (Keyboard::isKeyPressed(Keyboard::Space)) {
			vidas = 3;
			puntos = 0;
			sonic.setVelocity(4);
			enemyGolemIce.respawn();
			sonic.respawn();
		}
	}

}

void Juego::ProcesarTexto(){
	textPuntos.setString("Puntos: " + std::to_string(puntos));
	textVidas.setString("Vidas: " + std::to_string(vidas));
	textMensaje.setString("Game Over!!\n\nPresione space...");
}


void Juego::dibujar() {

	ventana->clear();

	//draw
	ventana->draw(fondo);
	ventana->draw(sonic);
	ventana->draw(gaseosa);
	ventana->draw(enemyGolemIce);
	ventana->draw(textPuntos);
	ventana->draw(textVidas);



	if (vidas == 0) {
		ventana->draw(textMensaje);
	}
	if (timer == 0) {
		ventana->draw(aumentoVelocidad);

	}

	ventana->display();
}
