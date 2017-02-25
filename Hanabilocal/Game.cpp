/*
 * Game.cpp
 *
 *  Created on: 24 févr. 2017
 *      Author: ubuntu
 */
#include "Game.h"

Game::Game(){
	nombre_joueur=0;
	cout << "entrer le nombre de joueurs : " << endl;
	cin >> nombre_joueur;
	for (int i=0;i< nombre_joueur;i++){
		joueurs.push_back(Joueur());
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



