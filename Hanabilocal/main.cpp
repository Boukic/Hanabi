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

using namespace std;

int main() {
	Couleur rouge("rouge");
	Couleur bleu("bleu");

	Carte c1(rouge, 5);
	Carte c2(bleu, 5);
//
//	Deck deck = Deck();
//	deck.affiche();
//	deck.shuffle();
//	deck.affiche();
	vector<Carte> cartes;
	cartes.push_back(c1);
	cartes.push_back(c2);
	Joueur joueur = Joueur("Killian",1,false,true,cartes );
	joueur.afficher();
	return 0;
}

