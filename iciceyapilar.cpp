#include<iostream>
#include<string.h>
using namespace std;

struct address{
	char mahalle[20];
	char cadde[20];
	char sokak[20];
};

struct ogrenci{
	char isim[20];
	int numara;
	struct address adres;
}ogrenci1;

int main(){
	
	strcpy(ogrenci1.isim,"burhan");
	ogrenci1.numara=123;
	strcpy(ogrenci1.adres.mahalle,"bey");
	strcpy(ogrenci1.adres.cadde,"12. cadde");
	strcpy(ogrenci1.adres.sokak,"1234 sokak");
	
	cout<<ogrenci1.isim<<" "<<ogrenci1.numara<<" "<<ogrenci1.adres.mahalle<<" "<<ogrenci1.adres.cadde<<" "<<ogrenci1.adres.sokak;
	
	
}
