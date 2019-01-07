#include "ZlavovyKupon.h"
#include "Kosik.h"

ZlavovyKupon::ZlavovyKupon()
{
}


ZlavovyKupon::~ZlavovyKupon()
{
}

bool ZlavovyKupon::uplatniZlavu(string kod, Kosik * k)
{
	if (kod.length() == 8) {
		Zlava::setZlava(0.05);

		Zlava::uplatniZlavu(k);
		return true;
		/*
		k->getCenaKosika();
		cout << "Zlava bola uplatnena, povodna cena: " << k->getKUhrade() << "e, ";
		Zlava::uplatniZlavu(k);
		cout << "cena po zlavneni: " << k->getKUhrade() << "e, " << endl;
		*/
	}
	else {
		cout << "Neplatny kod!" << endl;
		return false;
	}
}