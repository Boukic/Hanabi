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
	bool jeu_fini;


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
	void fini();
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

	bool isJeuFini() const {
		return jeu_fini;
	}

	void setJeuFini(bool jeuFini) {
		jeu_fini = jeuFini;
	}
};



#endif /* PLATEAU_H_ */
