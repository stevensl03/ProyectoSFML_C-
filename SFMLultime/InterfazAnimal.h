#pragma once
#include <iostream>

using namespace std;


class InterfazAnimal {

public:

	virtual void dormir() = 0;
	virtual void jugar() = 0;
	virtual void comer() = 0;
};