/*
 * Carte.cpp
 *
 *  Created on: 20 févr. 2017
 *      Author: ubuntu
 */

#include "Carte.h"
#include <iostream>
using namespace std;

Carte::Carte(){
	numero = 1;
	color = Couleur ("");
}
Carte::Carte(Couleur color,short numero){
	this->color = color;
	this->numero=numero;

}

void Carte::affiche(){
	cout <<"Carte valeur : "<<this->numero<<", Couleur : "<<this->color.getColor()<<endl;
}

Carte::~Carte(){
//	cout<<"Destruction de la carte "<<endl;
}


