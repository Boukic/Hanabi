/*
 * Plateau.h
 *
 *  Created on: 20 févr. 2017
 *      Author: ubuntu
 */

#ifndef PLATEAU_H_
#define PLATEAU_H_
#include <list>
#include <stack>
#include <vector>
#include "Deck.h"

using namespace std;

class Plateau{
private :
	stack<Carte> jaunes;
	stack<Carte> rouges;
	stack<Carte> verts;
	stack<Carte> blancs;
	stack<Carte> bleus;
	vector<Carte> defausse;
	Deck paquet;


public :
	bool poser(Carte c);
	Carte piocher();
	Plateau();
	~Plateau();
	void affiche();
	vector<Carte> distribution();
	int calculpoint();
	void affichedefausse();
	void defausser(Carte c);
};



#endif /* PLATEAU_H_ */
