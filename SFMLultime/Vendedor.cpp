#include "Vendedor.h"

Vendedor::Vendedor() : Empleados()
{
	tienda = "";
}

Vendedor::Vendedor(string nombre, string apellido, string genero, int edad, string labor, string tienda) : Empleados(nombre, apellido, genero, edad, labor){
	this->tienda = tienda;
}

void Vendedor::print(){
	Empleados::print();
	cout << "Nombre de tienda: " << getTienda() << endl;
}



string Vendedor::getTienda(){	return tienda;}
void Vendedor::setTienda(string tienda){	this->tienda = tienda;}

void Vendedor::vender()
{
	cout << "Te estoy vendiendo cosas" << endl;
}

ostream& operator<<(ostream& out, Vendedor& persona)
{
	persona.print();
	return out;
}

