#include "ZlavovyKupon.h"
#include "Kosik.h"

ZlavovyKupon::ZlavovyKupon()
{
}


ZlavovyKupon::~ZlavovyKupon()
{
}

bool ZlavovyKupon::jePlatny(string kod, Kosik * k)
{
	if (kod.length() == 8) {
		Zlava::setZlava(0.05);
		k->getCenaKosika();
		cout << "Zlava bola uplatnena, povodna cena: " << k->getKUhrade() << "e, ";
		Zlava::uplatniZlavu(k);
		cout << "cena po zlavneni: " << k->getKUhrade() << "e, " << endl;
		return true;
	}
	else {
		cout << "Neplatny kod!" << endl;
		return false;
	}
}