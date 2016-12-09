#include <string>
#include <sstream>
#include "Arqueros.h"

using std::stringstream;
using std::string;

Arqueros::Arqueros() : Soldado(){
    
}

Arqueros::Arqueros(string nombre,string ciudad, int edad, int flechas, double precision) : Soldado(nombre,ciudad,edad){
    this -> precision = precision;
    this-> flechas = flechas;
}

void Arqueros::setFlechas(int flechas2){
  flechas = flechas2;
}

int Arqueros::getFlechas(){
  return flechas;
}

void Arqueros::setPrecision(double precision2){
  precision = precision2;
}

double Arqueros::getPrecision(){
  return precision;
}

double Arqueros::Ataque()const{
	return flechas * precision/1000;
}

double Arqueros::Defensa()const{
	return 0;
}

string Arqueros::toString(){
	stringstream ss;
	ss<<nombre<<" "<<ciudad<<" "<<edad<<" "<<flechas<<" "<<precision;
	return ss.str();
}