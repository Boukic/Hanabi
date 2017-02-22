/*
 * Deck.h
 *
 *  Created on: 20 févr. 2017
 *      Author: ubuntu
 */

#include "Carte.h"
#include <list>
#include <vector>
using namespace std;

#ifndef DECK_H_
#define DECK_H_

class Deck{
private:
	vector<Carte> paquet;

public :
	Deck();
	~Deck();
	void shuffle();
	Carte pioche();
	int taille();
	void affiche();


};




#endif /* DECK_H_ */
