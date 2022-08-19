#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include <vector>
#include "menu.h"
#include "Aguila.h"
#include "Cebra.h"
#include "Cocodrilo.h"
#include "Garza.h"
#include "Guacamaya.h"
#include "Hipopotamo.h"
#include "Leon.h"
#include "Oso.h"
#include "Pinguino.h"

#include "Veterinario.h"
#include "Vendedor.h"
#include "Cuidador.h"
#include "Celador.h"
#include "Aseador.h"

#include "Visitante.h"

#define MAX_NUMBER_OF_ITEM 4

using namespace std;
using namespace sf;

class Historia {

	bool exitMenu;
	int opc;

	Aguila *aguila;
	Cebra *zebra;
	Cocodrilo *cocodrilo;
	Garza *garza;
	Guacamaya *guacamaya;
	Hipopotamo *hipopotamo;
	Leon *leon;
	Oso *oso;
	Pinguino *pinguino;

	Veterinario* veterinatio;
	Vendedor* vendedor;
	Cuidador* cuidador;
	Celador* celador;
	Aseador* aseador;

	vector<Visitante* > visitantes;


public:
	Historia();

	void menu();
	void printHistoria();
	void printAnimales();
	void printEmpleados();



};