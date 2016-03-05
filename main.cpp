#include <iostream>
#include <cstring>
#include <vector>
#include <sstream>
/*---- Directives ----*/
#include "usuario.h"
#include "juego.h"

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::stringstream;

void imprimirCredenciales();
void imprimirMenu();
bool validacionId(int, vector<Juego>);
int validacionNombre(string , vector<Usuario>  );
bool validacionRepeticionNombre(string  ,vector<Usuario> );

int main(int argc, char *argv[]){
	int opcionMenu;
	vector<Usuario> userList;
	vector<Juego> gameList;
	do{
		imprimirMenu();				
		cin >> opcionMenu;
		//*****************************
		if(opcionMenu == 1){
			string nombre, contrasena;
			cout<< "Ingresar nombre: ";
			cin>> nombre;
			while(validacionRepeticionNombre(nombre, userList)){
				cout<< "Error nombre ya existe Ingresar nombre: ";
				cin>> nombre;
			}
			cout<< "Ingresar contrasena: ";
			cin >> contrasena;

			Usuario u(nombre, contrasena);
			userList.push_back(u);
			cout << userList.at(0).toString();
							
		//*****************************	
		}else if(opcionMenu == 2){
			string Us, Con;
			cout<< "Ingresar nombre de usuario: ";
			cin>> Us;
			int posicion = validacionNombre(Us, userList);
			cout<< "Ingresar contrasena: ";
			cin>> Con;
			//****************AGREGAR  JUEGOS
			if(posicion == -1){
				posicion = 0;
				if(userList[posicion].getContrasena() == Con){
					int opcion;
					cout<< "Ingresar opcion del menu:"<< endl;
						cout<< "1. Agregar juego"<<endl;
						cout<< "2. Cambiar contrasena"<<endl;
						cout<< "3. Elminar juego"<<endl;
					cin >> opcion;
					if(opcion == 1){
						int opJuego;
						int identidad;
						if(gameList.size() > 0){
							string nombre, contrasena;
							cout<< "Ingresar nombre: ";
							cin>> nombre;
							while(validacionRepeticionNombre(nombre, userList)){
								cout<< "Error nombre ya existe Ingresar nombre: ";
								cin>> nombre;
							}
							cout<< "Ingresar contrasena: ";
							cin >> contrasena;
							Usuario u(nombre, contrasena);
							userList.push_back(u);
							do{
								cout<< "Ingresar id del juego";
								cin>> identidad;
								while(validacionId(identidad,gameList)){
									cout<< "Ingresar id del juego";
									cin>> identidad;
								}
								cout<< "Desea agregar mas juegos \n 1. Si \n 2. No"<<endl;
								cin>> opJuego;
								
							}
							while(opJuego==1);

							}else{
								cout<< "No hay juegos en existencia"<<endl;
							}
					}
					if(opcion==2){
						string  Cont;
						cout<< "Ingresar contrasena: ";
						cin>> Cont;
					}
					if(opcion==3){

					}
					
			}
			}else{
				cout<< "NOMBRE DE USUARIO INCORRECTO "<< endl;
			}
		//*****************************
		}else if(opcionMenu == 3){
				
		}

	}
	while(opcionMenu != 6);
	return 0;
}

bool validacionRepeticionNombre(string nombre ,vector<Usuario> userList ){
	bool condicion = false;
	for(int i =0 ; i< userList.size(); i++){
		if(nombre == userList[i].getNombre()){
			condicion = true;
		}
	}
	return condicion;
}


int validacionNombre(string nombre, vector<Usuario> userList ){
	int posicion = -1;
	for(int i =0 ; i< userList.size(); i++){
		if(nombre == userList.at(i).getNombre()){
			posicion = i;
		}
	}
	return posicion;
}

void imprimirMenu(){
	cout<< "Ingresar opcion del menu:"<< endl;
	cout<< "1. Agregar usuario"<<endl;
	cout<< "2. Modificar usuario"<<endl;
	cout<< "3. Agregar juego"<<endl;
	cout<< "4. Listar usuarios"<<endl;
	cout<< "5. Listar juegos"<<endl;
	cout<< "6. ELiminar juegos"<<endl;
	cout<< "7. ELiminar usuario"<<endl;
	cout<< "8. Salir"<<endl;		
}



bool validacionId(int id, vector<Juego> gameList){
	bool condicion = false;
	for(int i =0 ; i< gameList.size(); i++){
		//nivel = (int)contactos.at(i) -> getFriendLevel();
		if(id == gameList[i].getId()){
			condicion = true;
		}
	}
	return condicion;
}

