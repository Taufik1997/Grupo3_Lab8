#include <string>
#include <sstream>
#include "Arqueros.h"

using std::stringstream;
using std::string;

Arqueros::Arqueros() : Soldado(){
    
}

Arqueros::Arqueros(string nombre,string ciudad, int edad, int flechas, double presicion) : Soldado(nombre,ciudad,edad),flechas(flechas),presicion(presicion){
    
}

void Arqueros::setFlechas(int flechas2){
  flechas = flechas2;
}

int Arqueros::getFlechas(){
  return flechas;
}

void Arqueros::setPresicion(int presicion2){
  presicion = presicion2;
}

int Arqueros::getPresicion(){
  return presicion;
}

double Ataque()const{
	return flechas * presicion/1000;
}

double Defensa()const{
	return 0;
}

string Arqueros::toString(){
	stringstream ss;
	ss<<nombre<<" "<<ciudad<<" "<<edad<<" "<<flechas<<" "<<presicion;
	return ss.str();
}