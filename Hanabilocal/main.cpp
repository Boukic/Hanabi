/*
 * main.cpp
 *
 *  Created on: 21 févr. 2017
 *      Author: louis
 */

#include <iostream>
#include "Couleur.h"
#include "Carte.h"

using namespace std;

int main() {
	Couleur rouge("rouge");
	Couleur bleu("bleu");

	Carte c1(rouge, 5);
	Carte c2(bleu, 5);

	c2.affiche();

	return 0;
}

