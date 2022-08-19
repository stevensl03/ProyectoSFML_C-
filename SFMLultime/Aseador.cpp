#include "Aseador.h"

Aseador::Aseador() : Empleados()
{
	zonaLimpieza = "";
}

Aseador::Aseador(string nombre, string apellido, string genero, int edad, string labor, string zonaLimpieza) : Empleados(nombre, apellido, genero, edad, labor){
	this->zonaLimpieza = zonaLimpieza;
}

void Aseador::print()
{
	Empleados::print();
	cout << "Zona de limpieza: " << getZonaLimpieza() << endl;
}

string Aseador::getZonaLimpieza(){	return zonaLimpieza;}
void Aseador::setZonaLimpieza(string zonaLimpieza){	this->zonaLimpieza = zonaLimpieza;}

void Aseador::limpiar()
{
	cout << "Estoy limpiando" << endl;
}

ostream& operator<<(ostream& out, Aseador& persona)
{
	persona.print();
	return out;
}

