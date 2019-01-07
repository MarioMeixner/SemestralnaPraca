#pragma once
#include <string>
#include "Zlava.h"

using namespace std;

class ZlavovyKupon : public Zlava
{
public:
	ZlavovyKupon();
	~ZlavovyKupon();
	bool uplatniZlavu(string kod, Kosik * k);
};

