/*
 * Deck.cpp
 *
 *  Created on: 20 févr. 2017
 *      Author: ubuntu
 */

using namespace std;
#include "Deck.h"

Deck::Deck(){
	list<Couleur>colors;
	colors.push_back(Couleur("bleu"));
	colors.push_back(Couleur("jaune"));
	colors.push_back(Couleur("rouge"));
	colors.push_back(Couleur("vert"));
	colors.push_back(Couleur("blanc"));

	for (int i=1;i<5;i++){
		if (i==1){
			for (int j=0;j<3;j++){
					list<Couleur>::iterator it;
					for(it=colors.begin();it!=colors.end();it++){
						paquet.push_back(Carte(*it,i));
					}
			}

	}
		if (i == 2 || i== 3 || i==4){
			for (int j=0;j<2;j++){
					list<Couleur>::iterator it;
					for(it=colors.begin();it!=colors.end();it++){
						paquet.push_back(Carte(*it,i));
					}
			}
	}
		if (i == 5){
					list<Couleur>::iterator it;
					for(it=colors.begin();it!=colors.end();it++){
						paquet.push_back(Carte(*it,i));
					}
			}
	}
}

void Deck::shuffle(){

}

int Deck::taille(){
	return paquet.size();
}
