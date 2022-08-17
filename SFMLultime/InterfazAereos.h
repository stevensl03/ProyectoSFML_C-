#pragma once
#include <iostream>

using namespace std;


class InterfazAereos {

public:

	virtual void volar() = 0;
	virtual void graznar() = 0;
};