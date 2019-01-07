#pragma once
#include "Kosik.h"

class Zlava
{
private:
	double zlava;
public:
	Zlava();
	~Zlava();
	bool uplatniZlavu(Kosik * k);
	void setZlava(double pZlava) { zlava = pZlava; }
	int getZlava() { return this->zlava; }
};