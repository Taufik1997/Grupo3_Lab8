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
}
	

Escuadron::~Escuadron(){

}

void Escuadron::setNombre(string nombre2){
  nombre = nombre2;
}

string Escuadron::getNombre(){
  return nombre;
}

void Escuadron::addSoldados(Soldado* soldado){
	this->soldados.push_back(soldado); 
}

Soldados* getSoldados(){
	return soldados;
}


string Escuadron::toString(){
	stringstream ss;
	ss<<"Nombre: "<<nombre;
	return ss.str();
}

