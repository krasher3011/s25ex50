#include "Goods.h"
#include "Money.h"
using namespace std;
void Goods::changeCost() {
	/*int n;
	cout << "\nChange/set cost on: ";
	cin >> n;
	cost = n;*/
	cost.setR();
	cost.setK();
}

void Goods::setName() {
	string n;
	cout << "Enter Name: ";
	getline(cin, n);
	name = n;
}

void Goods::setDate() {
	string n;
	cout << "Enter Date: ";
	cin >> n;
	date = n;
}

void Goods::setNakladnaia() {
	long int n;
	cout << "Enter number of nakladnaia: ";
	cin >> n;
	numberNaklodnoi = n;
}

void Goods::changeKol() {
	int n;
	cout << "\nChange/ Set couunt on: ";
	cin >> n;
	kol = n;
}
void Goods::Display() {
	cout << "\nName: " << name <<
		"\nDate: " << date<<'\n';
	cout << "Cost: "; cost.Display();
		cout<<"\nKol: " << kol <<
		"\nNakladnaia: " << numberNaklodnoi;
}
//string Goods::toString() {
//	string costGood;
//	int a;
//	a =  cost;
//	costGood = to_string(a);
//	return costGood;
//}
