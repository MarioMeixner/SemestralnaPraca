#pragma once
#include "Zlava.h"

class StudentskaZlava : public Zlava
{
public:
	StudentskaZlava();
	~StudentskaZlava();
	void zaregistrovat(string meno, string priezvisko, string kodISIC, Kosik * k);
};

