#include "Plateau.h"
#include <iostream>
using namespace std;

bool Plateau::poser(Carte c ){

	int couleur = 0;
	if (c.getColor().getColor()=="bleu") couleur = 1;
	if (c.getColor().getColor()=="jaune") couleur = 2;
	if (c.getColor().getColor()=="vert") couleur = 3;
	if (c.getColor().getColor()=="rouge") couleur = 4;
	if (c.getColor().getColor()=="blanc") couleur = 5;

	switch (couleur){
	case 1 :
		if (bleus.top().getNumero()+1==c.getNumero()){
			bleus.push(c);
			return true;
		}
		break;
	case 2 :
		if (jaunes.top().getNumero()+1==c.getNumero()){
			jaunes.push(c);
			return true;
		}
		break;
	case 3 :
		if (verts.top().getNumero()+1==c.getNumero()){
			verts.push(c);
			return true;
		}
		break;
	case 4 :
		if (rouges.top().getNumero()+1==c.getNumero()){
			rouges.push(c);
			return true;
		}
		break;
	case 5 :
		if (blancs.top().getNumero()+1==c.getNumero()){
			blancs.push(c);
			return true;
		}
		break;
	}
	return false;
}

int Plateau::calculpoint(){
	int score = 0;
	score += bleus.top().getNumero();
	score += jaunes.top().getNumero();
	score += rouges.top().getNumero();
	score += verts.top().getNumero();
	score += blancs.top().getNumero();
	return score;
}

void Plateau::affiche(){
	cout << "Cartes du plateau : "<< endl;
	bleus.top().affiche();
	jaunes.top().affiche();
	rouges.top().affiche();
	verts.top().affiche();
	blancs.top().affiche();
	cout << "affichage du deck : " << endl;
	paquet.affiche();

}

