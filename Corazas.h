#ifndef CORAZAS_H
#define  CORAZAS_H
#include <string>
#include "Soldado.h"

using std::string;

class Corazas : public Soldado {
    private:
    	int armadura;
    	int lanzas;
    public:
        Corazas();
        Corazas(string,string,int,int,int);
        void setArmadura(int);
		int getArmadura();
		void setLanzas(int);
		int getLanzas();
		double Ataque()const;
		double Defensa()const;
		string toString();
};

#endif