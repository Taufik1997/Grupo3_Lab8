#ifndef SOLDADO_H
#define SOLDADO_H 
#include <string>
#include <vector>

using std::vector;
using std::string;

class Soldado{
private:

	
public:
	string nombre;
	string ciudad;
	int edad;
	Soldado(string,string,int);
	Soldado();
	virtual ~Soldado();
	void setNombre(string);
	string getNombre();
	void setCiudad(string);
	string getCiudad();
	void setEdad(int);
	int getEdad();
	virtual double Ataque()const;
	virtual double Defensa()const;
	string toString();
};

#endif