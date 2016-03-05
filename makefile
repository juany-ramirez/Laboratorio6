redsocial:	juego.o usuario.o main.o
	g++ juego.o usuario.o main.o -o redsocial

main.o:	main.cpp juego.h usuario.h
	g++ -c main.cpp

juego.o: 	juego.cpp juego.h
	g++ -c juego.cpp

usuario.o: 	usuario.cpp usuario.h
	g++ -c usuario.cpp
