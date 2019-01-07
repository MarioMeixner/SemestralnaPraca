#pragma once
#include "Zlava.h"

class StudentskaZlava : public Zlava
{
public:
	StudentskaZlava();
	~StudentskaZlava();
	bool uplatniZlavu(Kosik * k, string meno, string priezvisko, string kodISIC);
};

