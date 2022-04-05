#include "Table.h"
#include <iostream>
using namespace std;

Table::Table(float p)
{
	std::cout << "Contructeur classe Table " << std::endl;
	this->poids = p;
}

void Table::afficher() const
{
	std::cout << "Le poids est: " << this->poids << std::endl;
}


Table::~Table() {



}