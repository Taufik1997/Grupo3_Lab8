#include <string>
#include <sstream>
#include "Asesinos.h"

using std::stringstream;
using std::string;

Asesinos::Asesinos() : Soldado(){
    
}

Asesinos::Asesinos(string nombre,string ciudad, int edad, int asesinatos, int desapercivido) : Soldado(nombre,ciudad,edad),asesinatos(asesinatos),desapercivido(desapercivido){
    
}

void Asesinos::setAsesinatos(int Asesinatos2){
  Asesinatos = Asesinatos2;
}

int Asesinos::getAsesinatos(){
  return Asesinatos;
}

void Asesinos::setDesapercivido(int desapervido2){
  desapervido = desapervido2;
}

int Asesinos::getDesapercivido(){
  return desapervido;
}

double Ataque()const{
	return asesinatos;
}

double Defensa()const{
	return desapervido*10;
}

string Asesinos::toString(){
	stringstream ss;
	ss<<nombre<<" "<<ciudad<<" "<<edad<<" "<<asesinatos<<" "<<desapercivido;
	return ss.str();
}