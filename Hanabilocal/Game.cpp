/*
 * Game.cpp
 *
 *  Created on: 24 févr. 2017
 *      Author: ubuntu
 */
#include "Game.h"

Game::Game(){
	nombre_joueur=0;
	while(nombre_joueur<2){
		cout << "entrer le nombre de joueurs : " << endl;
		cin >> nombre_joueur;
	}
	for (int i=0;i< nombre_joueur;i++){
		joueurs.push_back(Joueur(i));
	}
}

Game::Game(vector<Joueur> j){
	this ->joueurs = j;
	nombre_joueur = joueurs.size();
	plateau = Plateau();


}

Carte Game::piocher(){
	return plateau.piocher();
}

void Game::afficherJoueur(){
	vector<Joueur>::iterator it;
	for (it = joueurs.begin();it!=joueurs.end();it++){
			it->afficher();
		}
}

