#include "Aseador.h"

Aseador::Aseador() : Empleados()
{
}

Aseador::Aseador(string nombre, string apellido, string labor) : Empleados(nombre, apellido, labor)
{
}

void Aseador::limpiar()
{
	cout << "Estoy limpiando" << endl;
}
