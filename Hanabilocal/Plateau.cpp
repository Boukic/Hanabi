#include "Plateau.h"
#include <iostream>
using namespace std;

Plateau::Plateau(){
	jaunes.push(Carte(Couleur("jaune"),0));
	bleus.push(Carte(Couleur("bleu"),0));
	blancs.push(Carte(Couleur("blanc"),0));
	verts.push(Carte(Couleur("vert"),0));
	rouges.push(Carte(Couleur("rouge"),0));
	paquet = Deck();
}

bool Plateau::poser(Carte c ){

	int couleur = 0;
	if (c.getColor().getString().compare("bleu")) couleur = 1;
	if (c.getColor().getString().compare("jaune")) couleur = 2;
	if (c.getColor().getString().compare("vert"))couleur = 3;
	if (c.getColor().getString().compare("rouge")) couleur = 4;
	if (c.getColor().getString().compare("blanc")) couleur = 5;

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
//	paquet.affiche();

}

Carte Plateau::piocher(){
	return paquet.pioche();
}

vector<Carte> Plateau::distribution(){
	vector<Carte> main;
	for(int i=0;i<4;i++){
		main.push_back(paquet.pioche());
	}
	return main;
}

Plateau::~Plateau(){
	cout << "Destruction du Plateau" << endl;
}

void Plateau::affichedefausse(){
	cout << "alffichage de la defausse " << endl;
	vector<Carte>::iterator it;
	for (it = defausse.begin();it!=defausse.end();it++){
		it->affiche();
	}
}

	void Plateau::defausser(Carte c){
		defausse.push_back(c);
	}


