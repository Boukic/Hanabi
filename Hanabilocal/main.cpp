/*
 * main.cpp
 *
 *  Created on: 21 f�vr. 2017
 *      Author: louis
 */

#include <iostream>
#include "Couleur.h"
#include "Carte.h"
#include "Deck.h"
#include "Joueur.h"
#include "Plateau.h"

using namespace std;

int main() {
	Plateau nouveauplateau = Plateau();
	vector<Carte> main = nouveauplateau.distribution();
	vector<Carte>::iterator it;
	for (it = main.begin();it!=main.end();it++){
		it->affiche();
	}
//	Deck deck = Deck();
//	cout << "taille du paquet" << deck.taille()<< endl;
//	deck.pioche().affiche();
//	cout << "taille du paquet" << deck.taille()<< endl;
}

