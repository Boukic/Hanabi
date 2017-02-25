/*
 * Joueur.cpp
 *
 *  Created on: 22 f�vr. 2017
 *      Author: louis
 */

#include "Joueur.h"
#include <iostream>
#include <vector>

using namespace std;

Joueur::Joueur(){
	vector<Carte> init;
	this->nom="";
	cin>>nom;
	this->numero=0;
	this->is_ia=false;
	this->is_turn=false;
	this->main=init;

}

Joueur::Joueur(int num){
	vector<Carte> init;
	string n;
	cout<<"Entrez le nom du joueur : ";
	cin>>n;
	this->nom=n;
	this->numero=num;
	this->is_ia=false;
	this->is_turn=false;
	this->main=init;

}



Joueur::Joueur(string n, int num, bool ia, bool turn, vector<Carte> m){
	vector<Carte> init;
	this->nom=n;
	this->numero=num;
	this->is_ia=false;
	this->is_turn=false;
	this->main=m;

}

Joueur::~Joueur(){

}

void Joueur::afficher(){
	cout<<"Nom : "<<nom<<", numero : "<<numero<<endl;
	cout<<"Affichage de la main : "<<endl;
	vector<Carte>::iterator it;
	for(it=main.begin();it!=main.end();it++){
		it->affiche();

	}
}
