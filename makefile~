juego: Soldado.o Arqueros.o Escuadron.o Corazas.o Main.o
	g++ Soldado.o Arqueros.o Escuadron.o Main.o -o juego -lncurses
Main.o:	Main.cpp Arqueros.h Escuadron.h Soldado.h
	g++ -c Main.cpp -lncurses
Soldado.o:	Soldado.cpp Soldado.h
	g++ -c Soldado.cpp
Arqueros.o:	Arqueros.cpp Arqueros.h Soldados.h
	g++ -c Arqueros.cpp
Escuadron.o:	Escuadron.cpp Escuadron.h
	g++ -c Escuadron.cpp
Corazas.o:	Corazas.cpp Corazas.h Soldados.h
	g++ -c Corazas.cpp
Asesinos.o:	Asesinos.cpp Asesinos.h Soldados.h
	g++ -c Asesinos.cpp
