#ifndef ASESINOS_H
#define  ASESINOS_H
#include <string>
#include "Soldado.h"

using std::string;

class Asesinos : public Soldado {
    private:
    	int asesinatos;
    	int desapercivido;
    public:
        Asesinos();
        Asesinos(string,string,int,int,int);
        void setAsesinatos(int);
		int getAsesinatos();
		void setDesapercivido(int);
		int getDesapercivido();
		double Ataque()const;
		double Defensa()const;
		string toString();
};

#endif