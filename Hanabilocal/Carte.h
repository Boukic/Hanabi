/*
 * Carte.h
 *
 *  Created on: 20 févr. 2017
 *      Author: ubuntu
 */

#ifndef CARTE_H_
#define CARTE_H_

static enum couleur{
	rouge,jaune,blanc,vert
};

class Carte{

private :

	short numero;
	couleur color;

public:
	couleur getColor() const {
		return color;
	}

	void setColor(couleur color) {
		this->color = color;
	}

	short getNumero() const {
		return numero;
	}

	void setNumero(short numero) {
		this->numero = numero;
	}

	Carte(couleur color,short numero);
	virtual ~Carte();
	void affiche();


};



#endif /* CARTE_H_ */
