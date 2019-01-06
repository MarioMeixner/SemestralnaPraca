#pragma once
#include "Tovar.h"
#include <vector>

using namespace std;

class Kosik
{
private:
	vector<Tovar> kosik;
public:
	Kosik();
	~Kosik();

	void pridajDoKosika(Tovar t);
	void vyberZKosika();
	bool jePrazdny();
	void vypisKosik();
	int getCenaKosika();
};

