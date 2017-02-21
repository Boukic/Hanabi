/*
 * Plateau.h
 *
 *  Created on: 20 févr. 2017
 *      Author: ubuntu
 */

#ifndef PLATEAU_H_
#define PLATEAU_H_
#include <list>
using namespace std;

class Plateau{
private :
	Deck paquet;
	list<Carte> plateau;

public :
	void poser();
	void piocher();
};



#endif /* PLATEAU_H_ */
