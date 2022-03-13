#include<iostream>
using namespace std;

struct ogrenci{
	char isim[20];
	char soyisim[20];
	int numara;
};

struct ogrenci degeral(){
	struct ogrenci yeni;
	cout<<"ogrenci bilgilerini girin: ";
	cin>>yeni.isim>>yeni.soyisim>>yeni.numara;
	return yeni;
}

void goster(struct ogrenci a){
	cout<<"ogrencinin bilgileri: "<<a.isim<<" "<<a.soyisim<<" "<<a.numara<<endl;
}

int main(){

	struct ogrenci ogrenci1=degeral();
	goster(ogrenci1);
	
}
