#include "Money.h"
#include <iostream>
using namespace std;
void Money::setR() {
	long r;
	cout << "Enter rubles: ";
	cin >> r;
	rubles = r;
}

void Money::setK() {
	unsigned char k;
	cout << "enter kop: ";
	int counter = 0;
	kop[0] = 0;
	for (int i = 1; i < 3; i++) {
		cin >> k;
		kop[i] = k;
	}
}

void Money::Display() {
	cout << rubles << ", "<<kop[1]<<kop[2];
}
void Money::sum(Money a) {
	int tempKOP=0;
	kop[2] = kop[2] + a.kop[2];
	if (kop[2] <= 105) kop[2] = kop[2] - 48;
	if (kop[2] > 105) { kop[2] = kop[2] - 58; tempKOP = 1;}
	kop[1] = kop[1] + a.kop[1]+tempKOP;
	if (kop[1] <= 105) kop[1] = kop[1] - 48;
	if (kop[1] > 105) { kop[1] = kop[1] - 58; kop[0] = 1; }
	rubles = rubles + a.rubles + int(kop[0]);
}

void Money::vich(Money a) {
	int tempKop = 0;
	kop[2] = kop[2] - a.kop[2];
	if (kop[2] >= 0) kop[2] = kop[2] + '0';
	if (kop[2] < 48) {
		if (kop[1] > 48) {
			kop[1] = kop[1] - 1;
			kop[2] = kop[2]+10;
		}
		else {
			rubles = rubles - 1;
			kop[2] = kop[2] + 10;
		}
	}
	kop[1] = kop[1] - a.kop[1];
	if (kop[1] >= 0) kop[1] = kop[1] + '0';
	if (kop[1] < 48) {
		rubles = rubles - 1;
			kop[1] = kop[1] + 10;
	}
	rubles = rubles - a.rubles;
}
