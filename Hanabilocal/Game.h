/*
 * Game.h
 *
 *  Created on: 24 févr. 2017
 *      Author: ubuntu
 */

#ifndef GAME_H_
#define GAME_H_
#include "Plateau.h"
#include "Joueur.h"

class Game{
private:
	Plateau plateau;
	vector<Joueur> joueurs;
	int nombre_joueur;
public :
	Game();
	Game(vector<Joueur> joueurs);
	Carte piocher();
	void defausser();
	void poser();



};




#endif /* GAME_H_ */
