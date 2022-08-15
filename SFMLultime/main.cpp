#include <SFML/Graphics.hpp>
#include "Juego.h"
#include "config.h"
#include <iostream>

using namespace sf;

int main()
{


    std::srand((unsigned)std::time(0));

    Juego* partida;
    partida = new Juego(WIDTH, HEIGHT, "ZOO");


    return 0;
}