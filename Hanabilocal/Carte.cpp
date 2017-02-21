/*
 * Carte.cpp
 *
 *  Created on: 20 févr. 2017
 *      Author: ubuntu
 */

#include "Carte.h"
#include <iostream>
using namespace std;

Carte::Carte(Couleur color,short numero){
	this->color = color;
	this->numero=numero;

}

void Carte::affiche(){
	cout <<"Carte" << this->numero << this->numero << endl;
}


