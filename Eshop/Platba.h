#pragma once
#include "Kosik.h"

class Platba
{
public:
	Platba();
	~Platba();
	void zaplatit(Kosik * k);
	int numDigits(int number);
};

