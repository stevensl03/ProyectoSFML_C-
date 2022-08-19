#include "Veterinario.h"

Veterinario::Veterinario() : Empleados()
{
	destreza = "";
}

Veterinario::Veterinario(string nombre, string apellido, string genero, int edad, string labor, string destreza) : Empleados(nombre, apellido, genero, edad, labor ){
	this->destreza = destreza;
}

void Veterinario::print(){
	Empleados::print();
	cout << "Destreza: " << getDestreza() << endl;
}



string Veterinario::getDestreza(){	return destreza;}
void Veterinario::setDestreza(string destreza){	this->destreza = destreza;}

void Veterinario::evaluar()
{
	cout << "Estoy evaluando el paciente" << endl;
}

ostream& operator<<(ostream& out, Veterinario &persona)
{
	persona.print();
	return out;
}

