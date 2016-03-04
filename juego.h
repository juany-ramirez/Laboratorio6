#pragma once

#include <string>

using std::string;

class Juego{
    int id;
    string nombre;
    int ano;
    string desarrolladores;
    string genero;
public:
    Juego(int id, string nombre,int ano,string desarrolladores,string genero);
    string toString()const;
    int getId();
};