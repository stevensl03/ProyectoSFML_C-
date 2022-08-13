#include <SFML/Graphics.hpp>
#include "Personaje.h"

using namespace sf;

int main()
{
//Iniciador de ventana
    Vector2i tamaño = { 1200,800 };
    sf::RenderWindow ventana(sf::VideoMode(tamaño.x,tamaño.y), "ZOO");

    float fps = 60;
    ventana.setFramerateLimit(60);

    Personaje sonic;


    

    //GameLoop
    while (ventana.isOpen())
    {
        sf::Event event;
        while (ventana.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                ventana.close();
        }

        //CMD -Joy
        
        sonic.update();
        //update - actulizar los estados del juego
        ventana.clear();

        //draw
        ventana.draw(sonic);
       // ventana.draw(sonic.get_sprite());

        ventana.display();
    }

    return 0;
}