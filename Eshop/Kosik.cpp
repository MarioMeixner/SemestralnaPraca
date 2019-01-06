#include "Kosik.h"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

Kosik::Kosik()
{
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
	int suma = 0;
	for (Tovar t : kosik)
	{
		suma += t.getCena();
	}
	return suma;
}

