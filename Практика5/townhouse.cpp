#include "townhouse.h"
#include "apartment.h"
using namespace std;

string townhouse::getName() {
	return this->Name;
}
void townhouse::setName(string Name) {
	this->Name = Name;
}
townhouse::townhouse() { count_of_townhouse++; }
townhouse::~townhouse() {  }

int townhouse::getLS() const
{
	return this->LS;
}
void townhouse::Description()
{	 
	cout << "Name: " << this->getName() <<' ' << "Living spase: " << this->getLS() << endl;
}
void townhouse::setLS(int LS)
{
	this->LS = LS;
}
townhouse::townhouse(string Name) :immovables(LS){
	this->Name = Name;
	count_of_townhouse++;
}

bool townhouse::operator > ( townhouse& t) 
{
	return LS > t.LS;
}

int maxLS(townhouse t[])
{
	int max = 0;
	for (int i = 0; i < 5; ++i) {
		if (t[i].LS > max) {
			max = t[i].LS;
		}
	}
	return max;
}
