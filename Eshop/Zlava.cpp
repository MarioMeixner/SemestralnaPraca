#include "Zlava.h"



Zlava::Zlava()
{
}


Zlava::~Zlava()
{
}

void Zlava::uplatniZlavu(Kosik * k)
{
	int cislo = (int)(k->getCenaKosika() * this->zlava);
	k->setCenaKosika(cislo);
}
