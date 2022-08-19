#include "Cuidador.h"

Cuidador::Cuidador() : Empleados()
{
}

Cuidador::Cuidador(string nombre, string apellido, string labor) : Empleados(nombre, apellido, labor)
{
}

void Cuidador::alimentar()
{
	cout << "Estoy alimentando a los animales" << endl;
}
