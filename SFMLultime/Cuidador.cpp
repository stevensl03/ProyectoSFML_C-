#include "Cuidador.h"

Cuidador::Cuidador() : Empleados(){
	aparatosReparados = 0;
}

Cuidador::Cuidador(string nombre, string apellido, string genero, int edad, string labor, int aparatosReparados): Empleados(nombre, apellido, genero, edad, labor){
	this->aparatosReparados = aparatosReparados;
}

void Cuidador::print(){
	Empleados::print();
	cout << "Aparatos reparados: " << getAparatosReparados() << endl;
}

int Cuidador::getAparatosReparados(){	return  aparatosReparados;}
void Cuidador::setAparatosReparados(int aparatosReparados){	this->aparatosReparados = aparatosReparados;}



void Cuidador::alimentar()
{
	cout << "Estoy alimentando a los animales" << endl;
}

ostream& operator<<(ostream& out, Cuidador& persona)
{
	persona.print();
	return out;
}

