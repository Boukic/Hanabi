/*
 * Joeur.h
 *
 *  Created on: 22 f�vr. 2017
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

public:
	vector <Carte> main;
	Joueur();
	Joueur(int num);
	Joueur(string n, int num, bool ia, bool turn, vector<Carte> m);
	~Joueur();
	void afficher();

	bool isIsIa() const {
		return is_ia;
	}

	bool isIsTurn() const {
		return is_turn;
	}

	void setIsTurn(bool isTurn) {
		is_turn = isTurn;
	}

	const vector<Carte>& getMain() const {
		return main;
	}

	void setMain(const vector<Carte>& main) {
		this->main = main;
	}

	const string& getNom() const {
		return nom;
	}

	int getNumero() const {
		return numero;
	}

	void setNumero(int numero) {
		this->numero = numero;
	}
};


#endif /* JOUEUR_H_ */
