/*
 * Couleur.cpp
 *
 *  Created on: 21 f√©vr. 2017
 *      Author: ubuntu
 */
#include "Couleur.h"
#include <iostream>
using namespace std;

Couleur::Couleur(){
	this->color="blanc";

}

Couleur::Couleur(string couleur){
	if (couleur == "bleu" || couleur == "rouge" || couleur == "blanc" || couleur == "jaune" || couleur =="vert"){
		this->color=couleur;
	}
	else {
//		cout << "la couleur n'est pas valide !" << endl;
	}
}

void Couleur::affiche(){
	cout<<"La couleur est : "<<color<<endl;
}

bool Couleur::operator ==(const Couleur& color2){
	if(this->getString().compare(color2.getString())){
		return false;
	}
	return true;
}

Couleur::~Couleur(){
//	cout<<"La couleur a bien ÈtÈ dÈtruite."<<endl;
}
