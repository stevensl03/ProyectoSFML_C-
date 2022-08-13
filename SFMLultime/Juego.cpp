#include "Juego.h"


Juego::Juego(int width, int height, std::string title) {

	ventana = new RenderWindow(VideoMode(width, height), title);
	eventos = new Event;

	running = true;
	fps = 60;

	ventana->setFramerateLimit(60);

	gameLoop();

}

void Juego::gameLoop()
{
	while (running) {

		procedorEventos();
		dibujar();
	}
}

void Juego::procedorEventos()
{
	while (ventana->pollEvent(*eventos)) {
		if (eventos->type == Event::Closed) {
			ventana->close();
		}
	}

	sonic.update();
	//update - actulizar los estados del juego

	//CMD -Joy


}

void Juego::dibujar() {

	ventana->clear();

	//draw
	ventana->draw(sonic);
	// ventana.draw(sonic.get_sprite());

	ventana->display();
}
