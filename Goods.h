#pragma once
#include <iostream>
#include <string>
#include "Money.h"
using namespace std;
class Goods:public Money
{
	private:
		string name;
		string date;
		Money cost;
		int kol;
		long int numberNaklodnoi;
	public:
		Goods() {}
		void setName();
		void setDate();
		void setNakladnaia();
		void changeCost();
		void changeKol();
		void Display();
		/*string toString();*/
};

