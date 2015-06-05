#include "Persona.hpp"

Persona::Persona (string nombre, string apellido){
	this -> nombre = nombre;
	this -> apellido = apellido;
}

Persona::~Persona(){
	//NADA
}

string Persona::getNombre() const{
	return this -> nombre;
}

string Persona::getApellido() const{
	return this -> apellido;
}