#include<iostream>
#include<string.h>
using namespace std;

struct ogrenci{
	char isim[20];
	char soyisim[20];
	int numara;
}ogrenci1;

int main(){
	
	struct ogrenci *tut;
	strcpy(ogrenci1.isim,"burhan");
	strcpy(ogrenci1.soyisim,"mutlu");
	ogrenci1.numara=144;
	
	//ilk adres
	cout<<"&tut adresi: "<<&tut<<endl<<"tut adresi: "<<tut<<endl<<"&ogrenci1 adresi: "<<&ogrenci1<<endl<<"yeni adresler:"<<endl;

	tut=&ogrenci1;//normalde tut boþ bi yeri tutuyordu bundan sonra ogrenci1 i tutuyor
	
	//son adres
	cout<<"&tut adresi: "<<&tut<<endl<<"tut adresi: "<<tut<<endl<<"&ogrenci1 adresi: "<<&ogrenci1<<endl;

	cout<<ogrenci1.isim<<ogrenci1.soyisim<<ogrenci1.numara<<endl;
	cout<< tut->isim << tut->soyisim << tut->numara ;//pointerlarda bu þekilde kullanýlýr ->

}
