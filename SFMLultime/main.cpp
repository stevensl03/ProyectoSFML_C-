#include <SFML/Graphics.hpp>
#include "Juego.h"
#include "config.h"

using namespace sf;

int main()
{
    Juego* partida;
    partida = new Juego(WIDTH, HEIGHT, "ZOO");


    return 0;
}