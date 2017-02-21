/*
 * Couleur.cpp
 *
 *  Created on: 21 févr. 2017
 *      Author: ubuntu
 */
#include "Couleur.h"
#include <iostream>
using namespace std;

Couleur::Couleur(string couleur){
	if (couleur == "bleu" || couleur == "rouge" || couleur == "blanc" || couleur == "jaune" || couleur =="vert"){
	this->color=couleur;
	}
	else {
		cout << "la couleur n'est pas valide !" << endl;
	}
}

bool &Couleur::operator ==(const Couleur& color2){
	if(this->getColor().compare(color2.getColor())){
		return true;
	}
	return false;
}


