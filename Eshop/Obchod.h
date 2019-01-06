#pragma once
#include <vector>
#include <string>
#include "Tovar.h"

using namespace std;

class Obchod
{
private:
	vector<Tovar> sklad;
public:
	//Obchod();
	~Obchod();
	void naplnSklad();
	Tovar getTovar(int kod);
	void vypisProdukty();
};