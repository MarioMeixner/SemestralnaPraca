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

void StudentskaZlava::zaregistrovat(string meno, string priezvisko, string kodISIC, Kosik * k)
{
	if (meno.length() != 0 && priezvisko.length() != 0 && kodISIC.length() == 12) {
		Zlava::setZlava(0.15);
		ofstream out("output.txt");
		out << meno + " " + priezvisko + " " + kodISIC << endl; 
		out.close();

		k->getCenaKosika();
		cout << "Zlava bola uplatnena, povodna cena: " << k->getKUhrade() << "e, ";
		Zlava::uplatniZlavu(k);
		cout << "cena po zlavneni: " << k->getKUhrade() << "e, " << endl;
	}
}
