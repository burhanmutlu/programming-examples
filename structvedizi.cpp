#include<iostream>
using namespace std;

struct ogrenci{
	char isim[20];
	char soyisim[20];
	int numara;
}ogrenciler[3];

int main(){
	
	for(int i=0;i<3;i++){
		cout<<i+1<<". ogrenci bilgilerini girin: "<<endl;
		cin>>ogrenciler[i].isim>>ogrenciler[i].soyisim>>ogrenciler[i].numara;
	}
	
		for(int i=0;i<3;i++){
		cout<<i+1<<". ogrenci bilgileri: "<<endl<<ogrenciler[i].isim<<endl<<ogrenciler[i].soyisim<<endl<<ogrenciler[i].numara<<endl;
	}
}
