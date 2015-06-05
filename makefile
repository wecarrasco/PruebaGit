rm: creacion
	rm *.o;

creacion: Persona.o
	g++ main.cpp Persona.o -o exe

Persona.o:
	g++ -c Persona.cpp