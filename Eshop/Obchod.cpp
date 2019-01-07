#include "Obchod.h"

/*
Obchod::Obchod()
{
}
*/


Obchod::~Obchod()
{
	vector<Tovar>().swap(sklad);
}

void Obchod::naplnSklad()
{
	Tovar * iPhone7 = new Tovar("iPhone 7", 519);
	Tovar * iPhone8 = new Tovar("iPhone 8", 689);
	Tovar * iPhoneX = new Tovar("iPhone X", 949);
	Tovar * macbookA = new Tovar("MacBook Air", 1349);
	Tovar * macbookP = new Tovar("MacBook Pro", 1499);
	Tovar * iPad = new Tovar("iPad Pro", 879);
	Tovar * earpods = new Tovar("Apple EarPods", 29);
	Tovar * iMac = new Tovar("iMac", 1299);

	sklad.push_back(*iPhone7);
	sklad.push_back(*iPhone8);
	sklad.push_back(*iPhoneX);
	sklad.push_back(*macbookA);
	sklad.push_back(*macbookP);
	sklad.push_back(*iPad);
	sklad.push_back(*earpods);
	sklad.push_back(*iMac);
}

Tovar Obchod::getTovar(int kod) 
{
	try
	{
		return sklad.at(kod);
	}
	catch (exception& e)
	{
		cout << "Nespravny kod" << endl;
	}
}

void Obchod::vypisProdukty()
{
	int a = 1;
	for (Tovar t : sklad)
	{
		cout << a << ". Nazov: " << t.getNazov() << "\tCena: " << t.getCena() << "e" << endl;
		a++;
	}
}
