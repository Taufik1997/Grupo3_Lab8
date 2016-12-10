#include <curses.h>
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <cstdlib>
#include "Escuadron.h"
#include "Soldado.h"
#include "Corazas.h"
#include "Arqueros.h"
#include "Asesinos.h"

using namespace std;

void cleanScreen();

int main(){
	initscr();
	start_color();
	int contador = 0;
	char opc[1];
	vector<Escuadron*> escuadrones;
	do{
		//mvprintw(0,0,"");
		init_pair(1, COLOR_RED, COLOR_BLACK);
		init_pair(2, COLOR_BLUE, COLOR_BLACK);
		init_pair(3, COLOR_GREEN, COLOR_BLACK);
		attron(COLOR_PAIR(1));
		mvprintw(0,0,"Menu\n1. Crear un escuadron\n2. Simulador\nPor favor, ingrese su opcion\n");
		attroff(COLOR_PAIR(1));
		getstr(opc);
		clear();
		if(opc[0]=='1'){//Opc 1
			//nombre, escuadrones,
			//nombre, ciudad, edad (soldado)
			//arquero: flechas, precision(double)
			//coraza: dureza(int 1-10), cantLanzas
			//asesino: cantAsesinato(int), desapercibido(int 1-10)
			char nombre[20];
			char cantidadSoldados[13];
			mvprintw(0,0,"Ingrese el nombre de su escuadron: ");
			getstr(nombre);
			clear();
			mvprintw(1,0,"Ingrese la cantidad de soldados: ");
			getstr(cantidadSoldados);
			clear();
			int m = atoi(cantidadSoldados);
			escuadrones.push_back(new Escuadron(nombre));
			for (int i = 0; i < m; ++i)
			{
				char opcS[1];
				char nombreSoldado[20], ciudad[20], edad[13];
				char cantFlechas[13], precision[13];//Arquero
				char dureza[13], cantLanzas[13];//Coraza
				char cantAsesinato[13], cDesapercibido[13];//Asesinos
				mvprintw(0,0,"Ingrese que tipo de soldado quiere\n");
				mvprintw(1,0,"1. Arquero\n2. Coraza\n3. Asesino\n");
				getstr(opcS);
				clear();
				mvprintw(0,0,"Ingrese el nombre del soldado: ");
				getstr(nombreSoldado);
				mvprintw(1,0,"Ingrese la ciudad del soldado: ");
				getstr(ciudad);
				mvprintw(2,0,"Ingrese la edad del soldado: ");
				getstr(edad);
				if(opcS[0]=='1'){//Arquero
					mvprintw(3,0,"Ingrese la cantidad de flechas: ");
					getstr(cantFlechas);
					mvprintw(4,0,"Ingrese la precision (mm): ");
					getstr(precision);
					escuadrones.at(contador)->addSoldado(new Arqueros(nombreSoldado, ciudad, atoi(edad), atoi(cantFlechas), atof(precision)));
					//escuadrones.push_back(new Arqueros(nombreSoldado, ciudad, atoi(edad), atoi(cantFlechas), atof(precision)));
				}
				if(opcS[0]=='2'){//Coraza
					do{
						mvprintw(3,0,"Ingrese la dureza de la armadura del soldado: ");
						getstr(dureza);
					}while(atoi(dureza)<0 || atoi(dureza)>11);
					mvprintw(4,0,"Ingrese la cantidad de lanzas: ");
					getstr(cantLanzas);
					escuadrones.at(contador)->addSoldado(new Corazas(nombreSoldado, ciudad, atoi(edad), atoi(dureza), atoi(cantLanzas)));
				}
				if(opcS[0]=='3'){//Asesinos
					bool validcDes=true;
					mvprintw(3,0,"Ingrese la cantidad de asesinatos: ");
					getstr(cantAsesinato);
					do{

						mvprintw(4,0,"Ingrese la capacidad de pasar desapercibido: \n");
						getstr(cDesapercibido);
						if(atoi(cDesapercibido)<0 || atoi(cDesapercibido)>11){
							validcDes=false;
							mvprintw(4,0, "Tiene que ser menor que 11 y mayor que 0.");
						}
					}while(!validcDes);
					escuadrones.at(contador)->addSoldado(new Asesinos(nombreSoldado, ciudad, atoi(edad), atoi(cantAsesinato), atoi(cDesapercibido)));
				}
				clear();
			}//fin for
			contador++;
		}//fin opcion 1mvprintw

		if(opc[0]=='2'){
			if(escuadrones.size() >= 4){
				vector<Escuadron*> bando1;
				vector<Escuadron*> bando2;
				string tryW;
				mvprintw(0,0,"Lista de escuadrones:\n");
				for (int i = 0; i < escuadrones.size(); ++i)
				{
					tryW = escuadrones.at(i)->toString();

					printw("\n %d %s",i,tryW.c_str());
					//getch();
				}
				printw("\n");
				attron(COLOR_PAIR(2));
				printw("Ingrese el primer escuadron del primer bando:\n");
				char frontP[1];
				getstr(frontP);
				//clear();
				printw("Ingrese el segundo escuadron del primer bando:\n");
				char retaP[1];
				getstr(retaP);
				attroff(COLOR_PAIR(2));
				//clear();
				bando1.push_back(escuadrones.at(atoi(frontP)));
				bando1.push_back(escuadrones.at(atoi(retaP)));
				attron(COLOR_PAIR(3));
				printw("Ingrese el primer escuadron del segundo bando:\n");
				char frontP2[1];
				getstr(frontP2);
				//clear();
				printw("Ingrese el segundo escuadron del segundo bando:\n");
				char retaP2[1];
				getstr(retaP2);
				attroff(COLOR_PAIR(3));
				clear();
				bando2.push_back(escuadrones.at(atoi(frontP2)));
				bando2.push_back(escuadrones.at(atoi(retaP2)));
				bool ganador = false;
				int contador2 = 0;

				do{
					char front[1];
					char reta[1];
					printw("Bando 1:\n");
					for (int i = 0; i < bando1.size(); ++i)
					{
						tryW = bando1.at(i)->toString();

						printw("\n %d %s",i,tryW.c_str());
						//getch();
					}
					printw("\n");
					printw("Bando 2:\n");
					for (int i = 0; i < bando2.size(); ++i)
					{
						tryW = bando2.at(i)->toString();

						printw("\n %d %s",i,tryW.c_str());
						//getch();
					}
					printw("\n");
					if(contador2 % 2 == 0){
						printw("Es el turno del bando uno para atacar, ingrese el escuadron frontal para atacar:\n");
						getstr(front);
						printw("Es el turno del bando dos para escoger su defensa, ingrese el escuadron de retaguardia:\n");
						getstr(reta);
						if(bando1.at(atoi(front))->getAtaque() > (bando2.at(atoi(reta))->getDefensa()*10)){
							ganador = true;
						}

					}else{
						printw("Es el turno del bando dos para atacar, ingrese el escuadron frontal para atacar:\n");
						getstr(front);
						printw("Es el turno del bando uno para escoger su defensa, ingrese el escuadron de retaguardia:\n");
						getstr(reta);
						if(bando2.at(atoi(front))->getAtaque() > (bando1.at(atoi(reta))->getDefensa()*10)){
							ganador = true;
						}

					}
					contador2++;
					clear();
				}while(!ganador);
				if((contador2-1) % 2 == 0){
					printw("El ganador es el bando 2!");
				}else{
					printw("El ganador es el bando 1!");
				}

			}else{
				printw("Tiene que haber mas de cuatro escuadrones para iniciar la simulacion.");
				clear();
			}
			


			
		}//fin opcion 2
		
	}while(opc[0]!=3);
	
	endwin();
}
