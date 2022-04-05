#include "Salle.h"
#include <iostream>
Salle::Salle()
{
	std::cout << "Constructeur de la classe Salle" << std::endl;
	this->M1 = new Mur();
	this->M2 = new Mur();
	this->s = 0.0;
}

Salle::Salle(float s, Mur* M1, Mur* M2)
{
	std::cout << "Constructeur de la classe Salle" << std::endl;
	this->M1 = M1;
	this->M2 = M2;
	this->s = s;
}

Salle::~Salle()
{
	std::cout << "Destructeur de la classe Salle" << std::endl;
	delete this->M1;
	delete this->M2;
	this->M1 = 0;
	this->M2 = 0;
}
