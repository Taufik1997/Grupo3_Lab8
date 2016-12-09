#include <string>
#include <sstream>
#include "Corazas.h"

using std::stringstream;
using std::string;

Corazas::Corazas() : Soldado(){
    
}

Corazas::Corazas(string nombre,string ciudad, int edad, int armadura, int lanzas) : Soldado(nombre,ciudad,edad),armadura(armadura),lanzas(lanzas){
    
}

void Corazas::setArmadura(int armadura2){
  armadura = armadura2;
}

int Corazas::getArmadura(){
  return armadura;
}

void Corazas::setLanzas(int lanzas2){
  lanzas = lanzas2;
}

int Corazas::getLanzas(){
  return lanzas;
}

double Ataque()const{
	return lanzas;
}

double Defensa()const{
	return armadura;
}

string Corazas::toString(){
	stringstream ss;
	ss<<nombre<<" "<<ciudad<<" "<<edad<<" "<<flechas<<" "<<precision;
	return ss.str();
}