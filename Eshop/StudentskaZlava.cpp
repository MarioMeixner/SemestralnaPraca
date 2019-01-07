#include "StudentskaZlava.h"
#include "Kosik.h"
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

StudentskaZlava::StudentskaZlava()
{
}


StudentskaZlava::~StudentskaZlava()
{
}

bool StudentskaZlava::uplatniZlavu(Kosik * k, string meno, string priezvisko, string kodISIC) {
	if (meno.length() != 0 && priezvisko.length() != 0 && kodISIC.length() == 12) {
		Zlava::setZlava(0.15);
		ofstream out("output.txt");
		out << meno + " " + priezvisko + " " + kodISIC << endl;
		out.close();

		Zlava::uplatniZlavu(k);
		return true;
		/*
		k->getCenaKosika();
		cout << "Zlava bola uplatnena, povodna cena: " << k->getKUhrade() << "e, ";
		Zlava::uplatniZlavu(k);
		cout << "cena po zlavneni: " << k->getKUhrade() << "e, " << endl;
		*/
	}
	return false;
}
