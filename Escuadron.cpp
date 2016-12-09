#include "Escuadron.h"
#include <string>
#include <sstream>
#include <iostream>
using std::stringstream;
using std::string;
using namespace std;

Escuadron::Escuadron(){

}

Escuadron::Escuadron(string nombre) {
	this->nombre = nombre;
	ataque = 0;
	defensa = 0;
}
	

Escuadron::~Escuadron(){

}

void Escuadron::setNombre(string nombre2){
  nombre = nombre2;
}

string Escuadron::getNombre(){
  return nombre;
}

void Escuadron::addSoldado(Soldado* soldado){
	ataque+= soldado->Ataque();
	defensa+= soldado->Defensa();
	this->soldados.push_back(soldado); 
}



string Escuadron::toString(){
	stringstream ss;
	ss<<"Nombre: "<<nombre;
	return ss.str();
}

