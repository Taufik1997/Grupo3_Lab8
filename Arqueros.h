#ifndef ARQUEROS_H
#define  ARQUEROS_H
#include <string>
#include "Soldado.h"

using std::string;

class Arqueros : public Soldado {
    private:
    	int flechas;
    	double precision;
    public:
        Arqueros();
        Arqueros(string,string,int,int,double);
        void setFlechas(int);
		int getFlechas();
		void setPrecision(double);
		double getPrecision();
		double Ataque()const;
		double Defensa()const;
		string toString();
};

#endif