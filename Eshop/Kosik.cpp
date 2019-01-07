#include "Kosik.h"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

Kosik::Kosik()
{
	this->suma = 0;
}


Kosik::~Kosik()
{
	vector<Tovar>().swap(kosik);
}

void Kosik::pridajDoKosika(Tovar t) {
	this->kosik.push_back(t);
}

void Kosik::vyberZKosika() {
	if (!this->kosik.empty()) {
		this->kosik.pop_back();
	}
}

bool Kosik::jePrazdny()
{
	if (kosik.empty())
	{
		return true;
	}
	else
	{
		return false;
	}
	return NULL;
}

void Kosik::vypisKosik()
{
	int a = 1;
	for (Tovar t : kosik)
	{
		cout << a << ". Nazov: " << t.getNazov() << endl;
		a++;
	}
}

int Kosik::getCenaKosika()
{
	int cena = 0;
	for (Tovar t : kosik)
	{
		cena += t.getCena();
	}
	this->suma = cena;
	return this->suma;
}

void Kosik::setCenaKosika(int cislo)
{
	this->suma -= cislo;
}

