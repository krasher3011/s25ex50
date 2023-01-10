#include <iostream>
#include "Goods.h";
#include "Money.h"
int main()
{
	Goods A;
	A.setName();
	A.setDate();
	A.changeCost();
	A.changeKol();
	A.setNakladnaia();
	A.Display();
	//cout<<'\n'<<A.toString();
	//Money A;
	//A.setR();
	//A.setK();
	//A.Display();
	//Money B;
	//B.setR();
	//B.setK();
	//A.vich(B);
	//A.Display();
}
