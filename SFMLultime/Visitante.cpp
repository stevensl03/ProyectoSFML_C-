#include "Visitante.h"

Visitante::Visitante() : Persona(){
	dineroGastado = 0;
}

Visitante::Visitante(string nombre, string apellido, string genero, int edad, float dineroGastado): Persona(nombre, apellido, genero, edad){
	this->dineroGastado = dineroGastado;
}


void Visitante::print(){
	cout << "--Informacion del visitante-- \n\n" << endl;
	Persona::print();
	cout << "Dinero gastado: " << getDineroGastado() << endl << endl;
}

float Visitante::getDineroGastado(){ return	dineroGastado;}
void Visitante::setDineroGastado(float dineroGastado){	this->dineroGastado = dineroGastado;}


void Visitante::fotografiar(){
	cout << "Estoy fotografiando" << endl;
}

ostream& operator<<(ostream& out, Visitante& persona)
{
	persona.print();
	return out;
}


