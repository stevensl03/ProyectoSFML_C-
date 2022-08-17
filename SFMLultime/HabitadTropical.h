#pragma once
#include <string>
#include <vector>
#include "Aguila.h"
#include "Cocodrilo.h"
#include "Oso.h"

using namespace std;

class HabitadTropical
{
	float tama�o;
	std::string nivelVegetacion;
	vector<Oso*> osos;
	vector<Cocodrilo*> cocobrilos;
	vector<Aguila*> aguilas;
public:
	HabitadTropical();
	HabitadTropical(float tama�o)
};

