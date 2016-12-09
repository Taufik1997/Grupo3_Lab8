#ifndef ESCUADRON_H
#define ESCUADRON_H 
#include <string>
#include "Soldado.h"
#include <vector>

using std::vector;
using std::string;

class Escuadron{
private:
	string nombre;
	vector<Soldado*> soldados;
	double ataque;
	double defensa;
	
public:
	Escuadron(string);
	Escuadron();
	virtual ~Escuadron();
	void setNombre(string);
	string getNombre();
	void addSoldado(Soldado*);
	string toString();
	double getAtaque();
	double getDefensa();
};

#endif