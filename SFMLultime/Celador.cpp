#include "Celador.h"

Celador::Celador() : Empleados()
{
}

Celador::Celador(string nombre, string apellido, string labor) : Empleados(nombre, apellido, labor)
{
}

void Celador::recibirentrada()
{
	cout << "Estoy recibiendo entradas a el zoo" << endl;
}

void Celador::patrullar()
{
	cout << "Estoy patrullando el zoo" << endl;
}
