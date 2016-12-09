#include "Soldado.h"
#include <string>
#include <sstream>
#include <iostream>
using std::stringstream;
using std::string;
using namespace std;

Soldado::Soldado(){

}

Soldado::Soldado(string nombre,string ciudad, int edad) {
	this->nombre = nombre;
	this->ciudad = ciudad;
	this->edad = edad;

}
	

Soldado::~Soldado(){

}

void Soldado::setNombre(string nombre2){
  nombre = nombre2;
}

string Soldado::getNombre(){
  return nombre;
}

string Soldado::getCiudad(){
  return ciudad;
}

void Soldado::setCiudad(string ciudad2){
  ciudad = ciudad2;
}

int Soldado::getEdad(){
  return edad;
}

void Soldado::setEdad(int edad2){
 edad = edad2;
}

double Soldado::Ataque()const{
	return -1;
}

double Soldado::Defensa()const{
	return -1;
}


string Soldado::toString(){
	stringstream ss;
	ss<<"Nombre: "<<nombre<<", Ciudad natal: "<<ciudad<<", Edad: "<<edad;
	return ss.str();
}
