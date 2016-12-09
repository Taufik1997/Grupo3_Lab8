juego: Main.o Soldado.o Arqueros.o Escuadron.o Asesinos.o Corazas.o 
	g++ Main.o Soldado.o Arqueros.o Escuadron.o Asesinos.o Corazas.o -o juego -lncurses

Main.o:	Main.cpp Soldado.h Arqueros.h Asesinos.h Corazas.h Escuadron.h
	g++ -c Main.cpp -lncurses

Soldado.o:	Soldado.cpp Soldado.h
	g++ -c Soldado.cpp

Escuadron.o:	Escuadron.cpp Escuadron.h
	g++ -c Escuadron.cpp

Arqueros.o:	Arqueros.cpp Arqueros.h Soldado.h
	g++ -c Arqueros.cpp

Corazas.o:	Corazas.cpp Corazas.h Soldado.h
	g++ -c Corazas.cpp

Asesinos.o:	Asesinos.cpp Asesinos.h Soldado.h
	g++ -c Asesinos.cpp
clean:
	rm -f *.o juego