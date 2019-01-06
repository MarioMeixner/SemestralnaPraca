#include <iostream>
#include <string>
#include "Tovar.h"
#include "Obchod.h"
#include "Kosik.h"
#include "Platba.h"

using namespace std;

void vypis(Obchod * o, Kosik * k);
void volbaKosik(Obchod * o, Kosik * k);
void volbaPlatenie(Kosik * k);

int main()
{
	Obchod* o = new Obchod;
	Kosik * k = new Kosik;
	o->naplnSklad();
	vypis(o, k);
    return 0;
}

void vypis(Obchod * o, Kosik * k)
{
	bool koniec = false;
	int volba;

	while (!koniec)
	{
		cout << "-----------* E-shop *-----------" << endl;
		cout << "Vitajte v obchode: " << endl;
		cout << "Moznosti: \n1. Produkty\n2. Kosik \n3. Platba \n0. Koniec" << endl;
		cin >> volba;
		switch (volba)
		{
		case 1:
			o->vypisProdukty();
			break;
		case 2:
			volbaKosik(o, k);
			break;
		case 3:
			volbaPlatenie(k);
			break;
		case 0:
			o->~Obchod();
			koniec = true;
			break;
		default:
			cout << "Zla volba, zadaj znova." << endl;
			continue;
		}
	}
}

void volbaKosik(Obchod * o, Kosik * k) 
{
	bool koniec = false;
	int a;
	int kodProduktu;
	while (!koniec)
	{
		cout << "-----------* Kosik *-----------" << endl;
		cout << "Moznosti:\n1. Pridaj do kosika\n2. Odstranit z kosika\n3. Zobraz kosik\n0. Spat" << endl;
		cin >> a;
		switch (a)
		{
		case 1:
			cin.ignore();
			cout << "Zadaj kod produktu: " << endl;
			cin >> kodProduktu;
			kodProduktu -= 1;
			k->pridajDoKosika(o->getTovar(kodProduktu));
			cout << o->getTovar(kodProduktu).getNazov() << " bol uspesne vlozeny do kosika." << endl;
			break;
		case 2:
			if (!k->jePrazdny()) {
				k->vyberZKosika();
				cout << "Produkt bol odstraneny z kosika." << endl;
			}
			else {
				cout << "Kosik je prazdny." << endl;
			}
			break;
		case 3:
			if (!k->jePrazdny()) {
				k->vypisKosik();
			}
			else {
				cout << "Kosik je prazdny." << endl;
			}
			break;
		case 0:
			koniec = true;
			break;
		default:
			cout << "Zla volba, zadaj znova." << endl;
			continue;
		}
	}
}

void volbaPlatenie(Kosik * k) {
	Platba * p = new Platba;
	bool koniec = false;
	int a;
	string nazovProduktu;
	while (!koniec)
	{
		cout << "-----------* Platba *-----------" << endl;
		cout << "Moznosti:\n1. Zaplatit\n2. Uplatnit zlavu\n0. Spat" << endl;
		cin >> a;
		switch (a)
		{
		case 1:
			p->zaplatit(k);
			k->~Kosik();
			koniec = true;
		case 2:
			
			break;
		case 0:
			koniec = true;
			break;
		default:
			cout << "Zla volba, zadaj znova." << endl;
			continue;
		}
	}
}