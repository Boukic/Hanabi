#include "Plateau.h"
#include <iostream>
using namespace std;

Plateau::Plateau(){
	bleus.push(Carte(Couleur("bleu"),0));
	jaunes.push(Carte(Couleur("jaune"),0));
	verts.push(Carte(Couleur("vert"),0));
	rouges.push(Carte(Couleur("rouge"),0));
	blancs.push(Carte(Couleur("blanc"),0));
	this->JetonRouge=3;
	this->jeu_fini=false;
}

void Plateau::poser(Carte c ){

	int couleur = 0;
	if (!c.getColor().getString().compare("bleu")) couleur = 1; //BLEU
	if (!c.getColor().getString().compare("jaune")) couleur = 2; //JAUNE
	if (!c.getColor().getString().compare("vert"))couleur = 3;  //VERT
	if (!c.getColor().getString().compare("rouge")) couleur = 4; //ROUGE
	if (!c.getColor().getString().compare("blanc")) couleur = 5; //BLANC

	cout<<couleur<<endl;

	switch (couleur){
	case 1 :
		if (bleus.top().getNumero()+1==c.getNumero()){
			bleus.push(c);
		}
		else{
			JetonRouge--;
			cerr<<"Mauvais coup ! "<<endl;
		}

		break;
	case 2 :
		if (jaunes.top().getNumero()+1==c.getNumero()){
			jaunes.push(c);
		}
		else{
			JetonRouge--;
			cerr<<"Mauvais coup ! "<<endl;
			}
		break;
	case 3 :
		if (verts.top().getNumero()+1==c.getNumero()){
			verts.push(c);
		}
		else
					JetonRouge--;
		break;
	case 4 :
		if (rouges.top().getNumero()+1==c.getNumero()){
			rouges.push(c);
		}
		else
					JetonRouge--;
		break;
	case 5 :
		if (blancs.top().getNumero()+1==c.getNumero()){
			blancs.push(c);
		}
		else
					JetonRouge--;
		break;
	}
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
	cout<<" Jeton : "<<endl;
	cout<<"Nombre de jeton rouge : "<<endl;
	for(int i=0;i<JetonRouge;i++){
		cout<<"<R>  ";
	}
	cout << "affichage du deck : " << endl;
//	paquet.affiche();
}

void Plateau::affiche2D(){
	cout << "Cartes du plateau : "<< endl;
	bleus.top().affiche2D();
	jaunes.top().affiche2D();
	rouges.top().affiche2D();
	verts.top().affiche2D();
	blancs.top().affiche2D();
	cout<<" Jeton : "<<endl;
	cout<<"Nombre de jeton rouge : "<<JetonRouge<<endl;
	for(int i=0;i<JetonRouge;i++){
		cout<<"<R> ";
	}
	cout<<endl;
//	cout << "affichage du deck : " << endl;
//	paquet.affiche();
}

void Plateau::fini(){
	if((bleus.top().getNumero()==5) && (jaunes.top().getNumero()==5) && (rouges.top().getNumero()==5) && (verts.top().getNumero()==5) && (blancs.top().getNumero()==5) ){
		this->jeu_fini=true;
	}
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
//	cout << "Destruction du Plateau" << endl;
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


