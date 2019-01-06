#pragma once
#include <iostream>

using namespace std;

class Tovar
{
private:
	string nazov;
	int cena;
public:
	Tovar(string nazov, int cena);
	~Tovar();

	string getNazov() { return nazov; }
	int getCena() { return cena; }
};

