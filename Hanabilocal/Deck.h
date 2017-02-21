/*
 * Deck.h
 *
 *  Created on: 20 févr. 2017
 *      Author: ubuntu
 */

#include "Carte.h"
#include <list>
using namespace std;

#ifndef DECK_H_
#define DECK_H_

class Deck{
private:
	list<Carte> paquet;

public :
	Deck();
	~Deck();
	void shuffle();
	Carte pioche();


};




#endif /* DECK_H_ */
