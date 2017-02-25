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
	int JetonRouge;
	//int JetonBleu = 8;


public :
	stack<Carte> jaunes;
	stack<Carte> rouges;
	stack<Carte> verts;
	stack<Carte> blancs;
	stack<Carte> bleus;
	vector<Carte> defausse;
	Deck paquet;


	bool poser(Carte c);
	Carte piocher();
	Plateau();
	~Plateau();
	void affiche();
	void affiche2D();
	vector<Carte> distribution();
	int calculpoint();
	void affichedefausse();
	void defausser(Carte c);

	int getJetonRouge() const {
		return JetonRouge;
	}

	void setJetonRouge(int jetonRouge = 3) {
		JetonRouge = jetonRouge;
	}
};



#endif /* PLATEAU_H_ */
