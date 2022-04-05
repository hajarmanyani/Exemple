#include "Amphi.h"
#include <iostream>
using namespace std;

Amphi::Amphi(){}



Amphi::Amphi(Table *T1) : T(T1)
{
}


Amphi::~Amphi()
{
	std::cout << "Destructeur classe Amphi" << std::endl;
}
