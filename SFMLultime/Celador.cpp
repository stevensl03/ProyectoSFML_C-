#include "Celador.h"

Celador::Celador() : Empleados(){
	zonaDeVigilia = "";
}

Celador::Celador(string nombre, string apellido, string genero, int edad, string labor, string zonaDeVigilia) : Empleados(nombre, apellido, genero, edad, labor) {
	this->zonaDeVigilia = zonaDeVigilia;
}

void Celador::print(){
	Empleados::print();
	cout << "Zona de vigilancia: " << getZonaDeVigilia() << endl;
}


string Celador::getZonaDeVigilia(){	return zonaDeVigilia;}
void Celador::setZonaDeVigilia(string zonaDeVigilia) { this->zonaDeVigilia = zonaDeVigilia; }






void Celador::recibirEntrada(){
	cout << "Estoy recibiendo entradas a el zoo" << endl;
}

void Celador::patrullar(){
	cout << "Estoy patrullando el zoo" << endl;
}

ostream& operator<<(ostream& out, Celador& persona)
{
	persona.print();
	return out;
}

