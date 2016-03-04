#pragma once

#include <string>
#include <vector>

using std::string;
using std::vector;

class Usuario{
    string nombre, contrasena;
	vector <int> juegos;
public:
        Usuario(string nombre, string contrasena, vector <int> juegos);
        string toString()const;
        bool agregarJuego(int id);// metodo que valida si se puede agregar 
        bool eliminarJuego();
        void cambiarContrasena(string contrasena);
        string getNombre();
        bool contrasenaValida(string nombre, string contrasena);
};