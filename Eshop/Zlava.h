#pragma once
#include "Kosik.h"

class Zlava
{
private:
	double zlava;
public:
	Zlava();
	~Zlava();
	void uplatniZlavu(Kosik * k);
	void setZlava(double pZlava) { zlava = pZlava; }
	int getZlava() { return this->zlava; }
};