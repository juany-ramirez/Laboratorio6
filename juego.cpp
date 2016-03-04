#include "juego.h"

#include <string>
#include <iostream>
#include <sstream>

using std::string;
using std::stringstream;

Juego::Juego(int id, string nombre,int ano,string desarrolladores, string genero):
	id(id), nombre(nombre), ano(ano), desarrolladores(desarrolladores), genero(genero) {}

string Juego::toString()const{
	stringstream ss;
	ss << id << " - " <<nombre;
	return ss.str();
}

int Juego::getId(){
	return id;
}