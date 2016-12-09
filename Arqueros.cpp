#include <string>
#include <sstream>
#include "Arqueros.h"

using std::stringstream;
using std::string;

Arqueros::Arqueros() : Usuario(){
    
}

Arqueros::Arqueros(string nombre,string ciudad, int edad, int flechas, double precision) : Usuario(nombre,ciudad,precision),flechas(flechas),precision(precision){
    
}

void Arqueros::setFlechas(int flechas2){
  flechas = flechas2;
}

int Arqueros::getFlechas(){
  return flechas;
}

void Arqueros::setPrecision(int precision2){
  precision = precision2;
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
	ss<<nombre<<" "<<ciudad<<" "<<edad<<" "<<flechas<<" "<<precision;
	return ss.str();
}