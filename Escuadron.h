#ifndef ESCUADRON_H
#define ESCUADRON_H 
#include <string>
#include <vector>

using std::vector;
using std::string;

class Escuadron{
private:
	string nombre;
	vector<Soldados*> soldados;
	
public:
	Escuadron(string,string,string);
	Escuadron();
	virtual ~Escuadron();
	void setNombre(string);
	string getNombre();
	void addSoldado(Soldado*);
	Soldados* getSoldados();
	string toString();
};

#endif