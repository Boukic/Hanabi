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

using namespace std;

int main() {
	Couleur rouge("rouge");
	Couleur bleu("bleu");

	Carte c1(rouge, 5);
	Carte c2(bleu, 5);

	Deck deck = Deck();
	deck.affiche();

	return 0;
}

