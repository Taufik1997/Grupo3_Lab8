#include <string>
#include <sstream>
#include "Asesinos.h"

using std::stringstream;
using std::string;

Asesinos::Asesinos() : Soldado(){
    
}

Asesinos::Asesinos(string nombre,string ciudad, int edad, int asesinatos, int desapercivido) : Soldado(nombre,ciudad,edad),asesinatos(asesinatos),desapercivido(desapercivido){
    
}

void Asesinos::setAsesinatos(int asesinatos2){
  asesinatos = asesinatos2;
}

int Asesinos::getAsesinatos(){
  return asesinatos;
}

void Asesinos::setDesapercivido(int desapercivido2){
  desapercivido = desapercivido2;
}

int Asesinos::getDesapercivido(){
  return desapercivido;
}

double Asesinos::Ataque()const{
	return asesinatos;
}

double Asesinos::Defensa()const{
	return desapercivido*10;
}

string Asesinos::toString(){
	stringstream ss;
	ss<<nombre<<" "<<ciudad<<" "<<edad<<" "<<asesinatos<<" "<<desapercivido;
	return ss.str();
}