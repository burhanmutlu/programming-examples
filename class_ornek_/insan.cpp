#include "insan.h"

insan::insan()
{
	yas=0, dogumYili=1970, kilo=0.00;
	ad="", soyad="", tcNo="", memleket="";
}

insan::insan(char* ad, char* soyad, char* tcNo,
 	char* memleket, int yas, int dogumYili, double kilo)
{
	this->ad = ad;
	this->soyad = soyad;
	this->tcNo = tcNo;
	this->memleket = memleket;
	this->yas = yas;
	this->dogumYili = dogumYili;
	this->kilo = kilo;
}

int insan::getYas()
{
	return this->yas;
}

void insan::setYas(int yas)
{
	this->yas = yas;
}

int insan::getDogumYili()
{
	return this->dogumYili;
}

void insan::setDogumYili(int dogumYili)
{
	this->dogumYili = dogumYili;
}

double insan::getKilo()
{
	return (double)this->kilo;
}

void insan::setKilo(double kilo)
{
	this->kilo = (double)kilo;
}

char* insan::getAd()
{
	return this->ad;
}

void insan::setAd(char* ad)
{
	this->ad = ad;
}

char* insan::getSoyad()
{
	return this->soyad;
}

void insan::setSoyad(char* soyad)
{
	this->soyad = soyad;
}

char* insan::getTc()
{
	return this->tcNo;
}

void insan::setTc(char* Tc)
{
	this->tcNo = Tc;
}

char* insan::getMemleket()
{
	return this->memleket;
}

void insan::setMemleket(char* memleket)
{
	this->memleket = memleket;
}

void insan::YuruyusYap(float mesafe)
{
	double kalori;
	kalori = mesafe * this->kilo * 0.781;
	this->kilo -= (double)kalori/7400;
}

void insan::YemekYe(double kalori)
{
	this->kilo += (double)kalori/7400;
}

