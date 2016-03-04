#include "usuario.h"

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::stringstream;

Usuario::Usuario(string nombre, string contrasena, vector <int> juegos):
	nombre(nombre), contrasena(contrasena), juegos(juegos){}


string Usuario::toString()const{
	stringstream ss;
	stringstream game;
	for(int i =0; i < juegos.size(); i++)
		game << juegos[i] << "\n";
	ss << nombre << " - " << contrasena << "\n JUEGOS : \n" << game;
	return ss.str();
}

bool Usuario::agregarJuego(int ids){//metodo recorre el vector de juegos  
	bool condicion = true;
	return condicion;
} 

bool Usuario::eliminarJuego(){
	bool condicion = true;
	return condicion;
}

void Usuario::cambiarContrasena(string contrasena){
	
}

string Usuario::getNombre(){
	return nombre;
}

bool Usuario::contrasenaValida(string nombre, string contrasena){
	bool condicion = true;
	return condicion;
}


