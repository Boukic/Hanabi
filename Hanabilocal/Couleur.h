/*
 * Couleur.h
 *
 *  Created on: 21 févr. 2017
 *      Author: ubuntu
 */

#ifndef COULEUR_H_
#define COULEUR_H_
#include <string>
using namespace std;

class Couleur {
private :
	string color;
public :
	Couleur(string color);
	~Couleur();
	bool &operator==(const Couleur& color2);

	const string& getColor() const {
		return color;
	}
};



#endif /* COULEUR_H_ */
