#pragma once
#include "Mur.h"
class Salle
{
private:
	float s;
	Mur *M1;
	Mur* M2;
public:
	Salle();
	Salle(float s, Mur* M1, Mur* M2);
	~Salle();
};

