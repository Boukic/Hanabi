#include "Plateau.h"

void Plateau::poser(Carte c ){
	switch (c.getColor()){
	case "bleu" :
		if (bleus.top().getNumero()+1==c.getNumero()){
			bleus.push(c);
		}
		break;
	case "jaune" :
		if (jaunes.top().getNumero()+1==c.getNumero()){
			jaunes.push(c);
		}
		break;
	case "vert" :
		if (verts.top().getNumero()+1==c.getNumero()){
			verts.push(c);
		}
		break;
	case "rouge" :
		if (rouges.top().getNumero()+1==c.getNumero()){
			rouges.push(c);
		}
		break;
	case "blanc" :
		if (blancs.top().getNumero()+1==c.getNumero()){
			blancs.push(c);
		}
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

