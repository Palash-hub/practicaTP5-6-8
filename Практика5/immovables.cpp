#include "immovables.h"
#include <iostream>
using namespace std;

int immovables::getLS() const{
	return this->LS;
}

void immovables::setLS(int LS) {
	this->LS = LS;
}

void immovables::Description() {
	cout << "Livign spase of immovables: " << this->getLS() << endl;
}

immovables::immovables() {
	count_of_immovables++; 
}

immovables::immovables(int LS)
{
	count_of_immovables++;
	this->LS = LS;
}


immovables::~immovables() {}



