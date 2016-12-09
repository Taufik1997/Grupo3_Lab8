#include <curses.h>
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <cstdlib>
void cleanScreen();
using namespace std;
int main(){
	initscr();
	char opc[1];
	vector<Escuadron> escuadrones;
	do{
		mvprintw(0,0,"Menu\n")
		mvprintw(0,1,"1. Crear un escuadron\n2. Simulador");
		getstr(opc);
		cleanScreen();
		if(opc[1]=='1'){//Opc 1
			//nombre, escuadrones,
			//nombre, ciudad, edad (soldado)
			//arquero: flechas, precision(double)
			//coraza: dureza(int 1-10), cantLanzas
			//asesino: cantAsesinato(int), desapercibido(int 1-10)
			char nombre[20];
			char cantidadSoldados[13];
			mvprintw(0,0,"Ingrese el nombre de su Escuadron: ");
			getstr(nombre);
			cleanScreen();
			mvprintw(0,0,"Ingrese la cantidad de soldados");
			getstr(cantidadSoldados);
			cleanScreen();
			for (int i = 0; i < atoi(cantidadSoldados); ++i)
			{
				char opcS[1];
				char nombreSoldado[20], ciudad[20], edad[13];
				char cantFlechas[13], precision[13];//Arquero
				char dureza[13], cantLanzas[13];//Coraza
				char cantAsesinato[13], cDesapercibido[13];//Asesinos
				mvprintw(0,0,"Ingrese que tipo de soldado quiere\n");
				mvprintw(0,1,"1. Arquero\n2. Coraza\n3. Asesino\n");
				getstr(opcS);
				mvprintw(0,0,"Ingrese el nombre del soldado: ");
				getstr(nombreSoldado);
				mvprintw(0,1,"Ingrese la ciudad del soldado: ");
				getstr(ciudad);
				mvprintw(0,2,"Ingrese la edad del soldado: ");
				getstr(edad);
				if(opcS[0]=='1'){//Arquero
					mvprintw(0,3,"Ingrese la cantidad de flechas: ");
					getstr(cantFlechas);
					mvprintw(0,4,"Ingrese la precision (mm): ");
					getstr(precision);
					escuadrones.push_back(new Arqueros(nombreSoldado, ciudad, atoi(edad), atoi(flechas), atof(precision)));
				}
				if(opcS[0]=='2'){//Coraza
					do{
						mvprintw(0,3,"Ingrese la dureza de la armadura del soldado: ");
						getstr(dureza);
					}while(atoi(dureza)>0 && atoi(dureza)<11);
					mvprintw(0,4,"Ingrese la cantidad de lanzas: ");
					getstr(cantLanzas);
					escuadrones.push_back(new Corazas(nombreSoldado, ciudad, atoi(edad), atoi(dureza), atoi(cantLanzas)));
				}
				if(opcS[0]=='3'){//Asesinos
					mvprintw(0,3,"Ingrese la cantidad de asesinatos: ");
					getstr(cantAsesinato);
					do{
						mvprintw(0,4,"Ingrese la capacidad de pasar desapercibido: ");
						getstr(cDesapercibido);
					}while(atoi(cDesapercibido)>0 && atoi(cDesapercibido)<11);
					escuadrones.push_back(new Asesinos(nombreSoldado, ciudad, atoi(edad, atoi(cantAsesinato), atoi(cDesapercibido))));
				}
				cleanScreen();
			}//fin for
		}//fin opcion 1

		if(opc[0]=='2'){

		}//fin opcion 2
		
	}while(opc!=3);
	
	endwin();
}
void cleanScrean(){
	for (int i = 0; i < 500; ++i)
	{
		for (int j = 0; j < 500; ++j)
		{
			mvprintw(i,j,"             .            ");
		}
	}
}