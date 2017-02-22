/*
 * Joeur.h
 *
 *  Created on: 22 févr. 2017
 *      Author: louis
 */

#ifndef JOUEUR_H_
#define JOUEUR_H_

#include <iostream>
#include <string>
#include "Carte.h"
#include <vector>

using namespace std;

class Joueur{
private:
	int numero;
	string nom;
	bool is_ia;
	bool is_turn;
	vector <Carte> main;
public:
	Joueur();
	Joueur(string n, int num, bool ia, bool turn, vector<Carte> m);
	~Joueur();
	void afficher();
};


#endif /* JOUEUR_H_ */
