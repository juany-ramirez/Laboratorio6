#include "usuario.h"

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::stringstream;

Usuario::Usuario(string nombre, string contrasena):
	nombre(nombre), contrasena(contrasena){
		vector<int> juegos;
	}


string Usuario::toString()const{
	stringstream ss;
	stringstream game;
	for(int i =0; i < juegos.size(); i++)
		game << juegos[i] << "\n";
	ss << nombre << " - " << contrasena << "\n JUEGOS : \n" << game;
	return ss.str();
}

bool Usuario::agregarJuego(int ids){//metodo recorre el vector de juegos  
	bool condicion = false;
	for(int i =0 ; i< juegos.size(); i++){
		if(juegos[i] == ids){
			condicion = true;
		}
	}
	if(condicion){
		juegos.push_back(ids);
	}
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

string Usuario::getContrasena(){
	return contrasena;
}

bool Usuario::contrasenaValida(string nombre, string contrasena){
	bool condicion = true;
	return condicion;
}


