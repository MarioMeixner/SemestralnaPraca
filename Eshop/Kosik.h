#pragma once
#include "Tovar.h"
#include <vector>

using namespace std;

class Kosik
{
private:
	vector<Tovar> kosik;
	int suma;
public:
	Kosik();
	~Kosik();

	void pridajDoKosika(Tovar t);
	void vyberZKosika();
	bool jePrazdny();
	void vypisKosik();
	int getCenaKosika();
	int getKUhrade() { return this->suma; }
	void setKUhrade(int pSuma) { this->suma = pSuma; }
	void setCenaKosika(int cena);
};

