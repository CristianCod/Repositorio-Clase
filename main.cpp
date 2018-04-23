/*
 * main.cpp
 *
 *  Created on: 17 abr. 2018
 *      Author: cristian
 */


#include <iostream>
#include "funciones.h"
using namespace std;

int main() {

	Parcela parcelas[4][4];
	crearTablero(parcelas);
    estadoJugador *jugador=new estadoJugador;

    semillas *tipoA=new semillas;
    semillas *tipoB=new semillas;
    semillas *tipoC=new semillas;
    valoresIniciales(jugador, tipoA,tipoB,tipoC);
	mostrarTablero(parcelas, jugador);

    crearTablero(parcelas);
	tirarDados(jugador);
	bool seguirJuego=true;
while(seguirJuego==true){
	seguirJuego=menu(parcelas, jugador, tipoA, tipoB, tipoC);
}
cout<<"Saliendo del juego"<<endl;


 borrarHeap(tipoA, tipoB,tipoC,jugador);

	return 0;
}

