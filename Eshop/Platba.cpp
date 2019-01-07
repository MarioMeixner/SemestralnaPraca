#include "Platba.h"
#include <string>
#include <iostream>

using namespace std;

Platba::Platba()
{
}


Platba::~Platba()
{
}

void Platba::zaplatit(Kosik * k)
{
	bool loop = true;
	string cisloKarty;
	int datumKarty;
	int cvcKarty;
	if (!k->jePrazdny())
	{
		cout << "Celkovo k uhrade: " << k->getKUhrade() << "e" << endl;
		cout << "Vyplnte prosim udaje o vasej platobnej karte " << endl;
		while (loop)
		{
			cout << "Cislo karty (bez medzier): ";
			cin >> cisloKarty;
			cout << "Datum ukoncenie platnosti (MMYY): ";
			cin >> datumKarty;
			cout << "CVC2/CVV2: ";
			cin >> cvcKarty;
			if (cisloKarty.length() == 16 && numDigits(datumKarty) == 4 && numDigits(cvcKarty) == 3)
			{
				cout << "Platba prebehla uspesne, dakujeme za Vas nakup." << endl;
				loop = false;
			}
			else {
				cout << "Nespravne zadane udaje!" << endl;
				continue;
			}
		}
	}
	else {
		cout << "Vas kosik je prazdny!" << endl;
	}
}

int Platba::numDigits(int number)
{
	int digits = 0;
	if (number < 0) digits = 1;
	while (number) {
		number /= 10;
		digits++;
	}
	return digits;
}