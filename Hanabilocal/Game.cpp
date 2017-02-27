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
	plateau = Plateau();


}

Game::Game(vector<Joueur> j){
	nombre_joueur=0;
	this ->joueurs = j;
	plateau = Plateau();
	int num_carte;
	int choix;
	int countBeforeEnd=joueurs.size()-1;


	vector<Joueur>::iterator it;
	for(it = j.begin(); it!=j.end(); it++){
		plateau.paquet.DistribuerXCartes(&it->main,4); // Distribution de 4 carte par joueurs;
	}

	while ((plateau.getJetonRouge() > 0 && !plateau.isJeuFini() && countBeforeEnd != 0)){
		plateau.affiche2D();
		cout<<"Carte restante dans le deck : "<<plateau.paquet.taille()<<endl;
		cout<<"AFFICHAGE DES MAINS : "<<endl;
		for(it = j.begin(); it!=j.end(); it++){
			vector<Joueur>::iterator itman;
			for(itman = j.begin(); itman!=j.end(); itman++){
				itman->afficher();
				cout<<endl;
			}
			cout<<"Tour de "<<it->getNom()<<endl<<endl;
			while (choix != 1 && choix != 2){
				cout<<"Jouer (1) ou d�fausser (2) une carte ? "<<endl;
				cin>>choix;
			}
			switch (choix) {
			case 1 : //Jouer une carte
				cout<<"Quel carte jouer ? ";
				cin>>num_carte;
				plateau.poser(it->getMain().at(num_carte));
				it->main.erase(it->main.begin()+num_carte);
				if (plateau.paquet.taille() != 0){
				it->main.push_back(plateau.piocher());
				}
				else countBeforeEnd--;
				break;
			case 2 : //D�fausser une carte
				cout<<"Quel carte d�fausser ? ";
				cin>>num_carte;
				it->main.erase(it->main.begin()+num_carte);
				if (plateau.paquet.taille() != 0){
				it->main.push_back(plateau.piocher());
				}
				else countBeforeEnd--;
				break;

			}

			choix = 0;
			plateau.fini();
			plateau.affiche2D();
		}
	}


	cout<<"Jeu fini : score : "<<plateau.calculpoint()<<endl;


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


