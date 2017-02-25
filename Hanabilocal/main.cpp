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
//	Plateau nouveauplateau = Plateau();
//	vector<Carte> main = nouveauplateau.distribution();
//	vector<Carte>::iterator it;
//	for (it = main.begin();it!=main.end();it++){
//		it->affiche();
//	}


//	Plateau newPlateau = Plateau();
	vector<Carte> mainDeLouis;
//	vector<Carte> mainDeKillian;
//	vector<Carte> mainDeHamid;
//
//	newPlateau.paquet.Distribuer4Cartes(&mainDeLouis);
//	newPlateau.paquet.Distribuer4Cartes(&mainDeKillian);
//	newPlateau.paquet.Distribuer4Cartes(&mainDeHamid);
//
	Joueur louis = Joueur("Louis",1,false,false,  mainDeLouis);
	Joueur killian = Joueur("Killian",2,false,false, mainDeKillian);
	Joueur hamid = Joueur("Hamid",3,false,false, mainDeHamid);
//
//	louis.afficher();
//	killian.afficher();
//	hamid.afficher();
//
//	int num_carte=0;
//
//	cin>>num_carte;
//
//	newPlateau.poser(louis.getMain().at(num_carte));
//
//	newPlateau.affiche();

	Game g = Game();



}

