#include "apartment.h"
#include "townhouse.h"
using namespace std;

string apartment::getName() const{
	return this->Name;
}
void apartment::setName(string Name) {
	this->Name = Name;
}
apartment::~apartment() {}
apartment::apartment() {
	count_of_apartmants++;
}
int apartment::getLS() const
{
	return LS;
}
void apartment::setLS(int LS)
{
	this->LS = LS;
}
apartment::apartment(string Name):immovables(LS) {
	this->Name = Name;
	count_of_apartmants++;
}

void apartment::Description()
{
	cout << "Name: " << this->getName() <<' '<< "Living spase: " << this->getLS() << endl;
}

 bool apartment::operator > ( apartment& a)
 {
	 return LS > a.LS;
 }

 int maxLS(apartment a[])
 {
	 int max = 0;
	 for (int i = 0; i < 5; ++i) {
		 if (a[i].LS > max) {
			 max = a[i].LS;
		 }
	 }
	 return max;
 }

