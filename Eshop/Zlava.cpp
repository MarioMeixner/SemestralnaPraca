#include "Zlava.h"



Zlava::Zlava()
{
}


Zlava::~Zlava()
{
}

bool Zlava::uplatniZlavu(Kosik * k)
{

	k->getCenaKosika();
	cout << "Zlava bola uplatnena, povodna cena: " << k->getKUhrade() << "e, ";
	int cislo = (int)(k->getCenaKosika() * this->zlava);
	k->setCenaKosika(cislo);
	cout << "cena po zlavneni: " << k->getKUhrade() << "e, " << endl;
	return true;
}
