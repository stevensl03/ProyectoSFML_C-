#include "Vendedor.h"

Vendedor::Vendedor() : Empleados()
{
	tienda = "";
}

Vendedor::Vendedor(string nombre, string apellido, string labor, string tienda) : Empleados(nombre, apellido, labor)
{
	this->tienda = tienda;
}

string Vendedor::gettienda()
{
	return tienda;
}

void Vendedor::settienda(string tienda)
{
	this->tienda = tienda;
}

void Vendedor::vender()
{
	cout << "Te estoy vendiendo cosas" << endl;
}
