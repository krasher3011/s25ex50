#pragma once
class Money
{
private:
	long rubles;
	unsigned char kop[3];
public:
	Money(){}
	void sum(Money a);
	void vich(Money a);
	/*void div();
	void divDROB();
	void proizvDROB();*/
	void Display();
	void setR();
	void setK();
};

