#include "Mur.h"
Mur::Mur() {
	this->diam = 0.0;
}

Mur::Mur(float diam) {
	this->diam = diam;
}

void Mur::afficher() const
{
	std::cout << "Le diametre est :" << this->diam << std::endl;
}

Mur::~Mur() {

}