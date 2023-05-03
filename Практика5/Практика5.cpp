#include <random>
#include <iostream>
#include <ctime>
#include <iterator>
#include <algorithm>
#include "townhouse.h"
#include "apartment.h"
#include "immovables.h"
using namespace std;

int immovables::count_of_immovables = 0;
int townhouse::count_of_townhouse = 0;
int apartment::count_of_apartmants = 0;


ostream& operator << (ostream& os, const apartment& a)
{
	return os << "apartment " << a.getName()<< ' ' << a.getLS() << ' ';
}
ostream& operator << (ostream& os, const townhouse& t)
{
	return os << "townhouse " << t.getLS() << ' ';
}

default_random_engine gen(time(NULL));

int random(int low, int high) 
{
	uniform_int_distribution<int> dist(low, high);
	return dist(gen);
}
int main()
{
	// относиться к другой лабе
	/*int max = 0;
	townhouse t[5];
	apartment a[5];
	uniform_int_distribution<> distribution(1, 100);
	for (int i = 0; i < 5; i++)
	{
		t[i].setLS(random(10, 100));
		a[i].setLS(random(10, 100));
		t[i].setName("townhouse");
		a[i].setName("apartment");
	}

	for (int i = 0; i < 5; i++)
	{
		cout << t[i].getLS() << '\t' << t[i].getName() << '\t';
		cout << endl;
	}
	for (int i = 0; i < 5; i++)
	{
		cout << a[i].getLS() << '\t' << a[i].getName() << '\t';
		cout << endl;
	}
	int maxT = maxLS(t);
	int maxA = maxLS(a);
	cout << "max Living spase Townhouse: " << maxT << endl; 
	cout << "max Living spase Apartment: " << maxA << endl;
	if (a[1] > a[3]) {
		cout << a[1] << "is biger" << endl;
	}
	else {
		cout << a[3] << "is biger" << endl;
	}

	immovables i(74);

	cout << "Count of immovables: " << i.count_of_immovables << endl;;
	cout << "Count of apartments: " << a[1].count_of_apartmants << endl;
	cout << "Count of townhouse: " << t[1].count_of_townhouse << endl;

	 
	cout << endl;
	cout << a[3] << endl;
	cout << t[3] << endl;
*/ // относиться к другой лабе

	vector<apartment> apartVector1;

	for (int i = 0; i < 1000; i++)
	{
		apartment apart("LiviHere");
		apart.setLS(random(10, 1000));
		apartVector1.push_back(apart);
	}

	cout << apartVector1.size() << endl;
	reverse(apartVector1.begin(), apartVector1.end());
	vector<apartment>  apartVector2(apartVector1); // создание второго перевернутого вектора
	reverse(apartVector1.begin(), apartVector1.end());
	/*for (int i = apartVector1.size() - 1; i >= 0; i--)
	{
		apartVector2.push_back(apartVector1[i]);
	}*/
	cout << apartVector2.size() << endl;
	for (int i = 0; i < apartVector1.size(); i++) // вывод на консоль
	{
		cout << apartVector1.at(i) << '\t' << apartVector2.at(i) << endl;
	}
	int maxLS = 0;
	for (int i = 0; i < apartVector1.size()/2; i++)
	{
		if ((apartVector1[i].getLS() > maxLS) || (apartVector2[i].getLS() > maxLS)) {
			maxLS = max<int>(apartVector1[i].getLS(), apartVector2[i].getLS());
		}
	}
	cout << maxLS << endl;
	for (int i = 0; i < 500; i++) // вставка в середину
	{
		apartment apart("JJOI303");
		apart.setLS(random(10, 1000));
		apartVector1.insert(apartVector1.begin()+499+i,apart);
	}
	maxLS = 0;
	for (int i = 0; i < apartVector1.size();i++) {
		if (apartVector1[i].getLS() > maxLS) {
			maxLS = apartVector1[i].getLS();
		}
	}
	cout << maxLS << endl;
	cout << apartVector1.size() << endl;
	for (apartment x : apartVector1){
		cout << x << endl;
	}
	apartVector1.clear();
	if (apartVector1.empty()) {
		cout << "vector is clear" << endl;
	}
}

