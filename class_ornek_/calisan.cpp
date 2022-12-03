#include "calisan.h"


Calisan::Calisan()
{
	this->maas = 0;
}

void Calisan::setMaas(int maas)
{
	this->maas = maas;
}

int Calisan::getMaas()
{
	return this->maas;
}

void Calisan::YemekYe(double kalori)
{
	this->kilo += (double)kalori/3700; // calisan adam daha çok kilo alsin mesela
}
