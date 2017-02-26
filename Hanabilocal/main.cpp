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
#include "Joueur.h"
#include "Plateau.h"
#include "Game.h"

using namespace std;

int main() {
	Couleur bleu("bleu");
	Couleur rouge("rouge");
	Couleur blanc("blanc");
	Carte c1(bleu, 1);
	Carte c2(bleu, 2);
	Carte c3(bleu, 3);
	Carte c4(bleu, 4);

	vector<Carte> mainDeLouis;
	vector<Carte> mainDeKillian;
	vector<Carte> mainDeHamid;

//	newPlateau.paquet.DistribuerXCartes(&mainDeLouis,4);
//	newPlateau.paquet.Distribuer4Cartes(&mainDeKillian);
//	newPlateau.paquet.Distribuer4Cartes(&mainDeHamid);
//
	Joueur louis = Joueur("Louis",1,false,false,  mainDeLouis);
	Joueur killian = Joueur("Killian",2,false,false, mainDeKillian);
	Joueur hamid = Joueur("Hamid",3,false,false, mainDeHamid);

	vector <Joueur> j;

	j.push_back(louis);
	j.push_back(killian);
	j.push_back(hamid);



	Game g = Game(j);




}

