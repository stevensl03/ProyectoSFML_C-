#pragma once
#include <iostream>

using namespace std;


class InterfazCarnivoros {

public:

	virtual void devorar() = 0;
	virtual void atacar() = 0;
};