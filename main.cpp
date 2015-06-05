#include <string>
#include <cstdlib>
#include <iostream>

#include "Persona.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
	string nombre = "Fulanito";
	string apellido = "Perencejo";

	Persona* fulano = new Persona (nombre, apellido);

	cout<< "Nombre: " << (fulano -> getNombre()) << "Apelllido: " << (fulano -> getApellido())<<endl;
	return EXIT_SUCCESS;
}