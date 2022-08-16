#include "Juego.h"
#include <iostream>


Juego::Juego(int width, int height, std::string title) {

	
	ventana = new RenderWindow(VideoMode(width, height), title);
	eventos = new Event;
	menu = new Menu(ventana->getSize().x, ventana->getSize().y);

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

	bufferVida.loadFromFile("sonidos/appVida.wav");
	sonidoVida.setBuffer(bufferVida);

	bufferGameOver.loadFromFile("sonidos/gameOver.wav");
	sonidoGameOver.setBuffer(bufferGameOver);

	musicaFondo.openFromFile("sonidos/musicaFondo.wav");
	musicaFondo.setVolume(50.f);
	musicaFondo.setLoop(true);
	musicaFondo.play();



	//imagen de fondo
	fondo_text.loadFromFile("imagenes/Fondo.png");
	fondo.setTexture(fondo_text);
	fondo.setScale((float)WIDTH / fondo.getTexture()->getSize().x,
	(float)HEIGHT / fondo.getTexture()->getSize().y);
	//vista
	//vistaPanatalla.reset(FloatRect(100,100,200,100));
	//vistaPanatalla.setSize(800, 600);
	//vistaPanatalla.zoom(0.5f);


	//mira de disparo
	textMira.loadFromFile("imagenes/mira.png");
	sprMira.setTexture(textMira);
	sprMira.setColor(Color::Red);
	ventana->setMouseCursorVisible(false);


	//inicializacion de atributos
	pauseMusic = 0;
	running = true;
	fps = 60;
	puntos = 0;
	vidas = 3;
	timer = 60 * 5;
	timerProyectil = 60 * 2;
	timerVida = 60 * 10;
	selectMenu = 0;


	//fps
	ventana->setFramerateLimit(60);

	//respaws
	gaseosa.respawn();
	CristalVida.respawn();
	aumentoVelocidad.respawn();
	enemyGolemIce.respawn();
	Ghost.respawn();

	

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

void Juego::procesarMouse()
{
	posicionMouse = Mouse::getPosition(*ventana);
	posicionMouse = (Vector2i)ventana->mapPixelToCoords(posicionMouse);
	
}

void Juego::procesarEventos()
{
	if (timerProyectil > 0) {
		timerProyectil--;
	}
	while (ventana->pollEvent(*eventos)) {

		//menu
		switch (eventos->type) {

		case Event::KeyReleased:
			switch (eventos->key.code) {
			case Keyboard::Up:
				menu->moveUp();
				break;

			case Keyboard::Down:
				menu->moveDown();
				break;


			case Keyboard::Return:
				switch (menu->getPressedItem()) {
				case 0:
					std::cout << "Play" << std::endl;
					selectMenu = 1;
					break;

				case 1:
					std::cout << "Option" << std::endl;
					break;

				case 2:
					ventana->close();
					break;


				}
			}

		default:
			break;
		}



		//cerrar ventana
		if (eventos->type == Event::Closed) {
			ventana->close();
		}
		if (Event::MouseMoved) {
			sprMira.setPosition((Vector2f)Mouse::getPosition(*ventana));
		}
		//sonic.proyectil->update(posicionMouse1);
	
		if (Mouse::isButtonPressed(Mouse::Left)) {
			if ( timerProyectil == 0) {
				sonic.proyectil->respawn(sonic._sprite);
				timerProyectil = 60 * 2;
				//posicionMouse1 = (Vector2i)ventana->mapPixelToCoords(posicionMouse);
			}

		}
		//////
		if (eventos->type == sf::Event::KeyPressed && eventos->key.code == sf::Keyboard::O) {

			if (pauseMusic == 0) {
				musicaFondo.play();
				pauseMusic++;
			}
			else {
				musicaFondo.stop();
				pauseMusic = 0;
			}

		}

		if (eventos->type == sf::Event::KeyPressed && eventos->key.code == sf::Keyboard::Escape) {
			selectMenu = 0;
		}




	}

//controllerManager
	controller.reset();

	if (Keyboard::isKeyPressed(Keyboard::W)) {
		controller.setPress(ControllerManager::Buttons::Up);
	}

	if (Keyboard::isKeyPressed(Keyboard::S)) {
		controller.setPress(ControllerManager::Buttons::Down);
	}

	if (Keyboard::isKeyPressed(Keyboard::A)) {
		controller.setPress(ControllerManager::Buttons::Left);
	}

	if (Keyboard::isKeyPressed(Keyboard::D)) {
		controller.setPress(ControllerManager::Buttons::Right);
	}
	
	//CMD -Joy

	if (vidas > 0 && selectMenu == 1) {

	//update - actulizar los estados del juego
	

		Ghost.update();
		enemyGolemIce.update();




		sonic.cmdComandos(controller);
		sonic.update();

		if (sonic.isCollision(gaseosa)) {
			sonidoGaseosa.play();
			puntos++;
			gaseosa.respawn();
		}


		if (timer > 0) {
			timer--;
		}
		if (timer == 0 && sonic.isCollision(aumentoVelocidad)) {
			sonidoPower.play();
			if (float(sonic.getVelocity().x) < 16.f){
				sonic.addVelocity(2);
			}
			else {
				puntos = puntos + 2;
			}
			timer = 60 * 5;
			aumentoVelocidad.respawn();
		}


		if (timerVida > 0) {
			timerVida--;
		}
		if (timerVida == 0 && sonic.isCollision(CristalVida)) {
			sonidoVida.play();
			vidas++;
			timerVida = 60 * 10;
			CristalVida.respawn();
		}
		//colision con enemigos
		if (sonic.isCollision(enemyGolemIce)) {
			vidas = vidas - 2;
			sonic.hited();
			enemyGolemIce.youDamage();
		}
		if (sonic.isCollision(Ghost)) {
			vidas--;
			sonic.hited();
			Ghost.youDamage();
		}

		//damage proyectil
		if (sonic.proyectil->isCollision(Ghost)) {
			Ghost.respawn();
			sonic.proyectil->_sonidoElect.play();
		}
		if (sonic.proyectil->isCollision(enemyGolemIce)) {
			enemyGolemIce.respawn();
			sonic.proyectil->_sonidoElect.play();
		}
		if (vidas <= 0) {
			sonidoGameOver.play();
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
	if (sprMira.getPosition().x != Mouse::getPosition().x) {
		sprMira.setPosition(Mouse::getPosition().x, sprMira.getPosition().y);
	}
	if (sprMira.getPosition().y != Mouse::getPosition().y) {
		sprMira.setPosition(sprMira.getPosition().x,Mouse::getPosition().y);
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
	if (selectMenu == 0) {
		menu->draw(*ventana);
	}
	else if (selectMenu == 1) {
		ventana->draw(fondo);
		//ventana->setView(vistaPanatalla);
		ventana->draw(sprMira);
		ventana->draw(sonic.proyectil->_sprite);
		ventana->draw(sonic);
		ventana->draw(gaseosa);
		ventana->draw(enemyGolemIce);
		ventana->draw(Ghost);




		if (vidas <= 0) {
			ventana->draw(textMensaje);
			sonic.proyectil->respawn(sonic._sprite);
		}

		if (timer == 0) {
			ventana->draw(aumentoVelocidad);
		}

		if (timerVida == 0) {
			ventana->draw(CristalVida);

		}

		ventana->draw(textPuntos);
		ventana->draw(textVidas);
	}


	ventana->display();
}
