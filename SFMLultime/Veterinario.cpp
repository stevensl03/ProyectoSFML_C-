#include "Veterinario.h"

Veterinario::Veterinario() : Empleados()
{
}

Veterinario::Veterinario(string nombre, string apellido, string labor) : Empleados(nombre, apellido, labor)
{
}

void Veterinario::evaluar()
{
	cout << "Estoy evaluando el paciente" << endl;
}
