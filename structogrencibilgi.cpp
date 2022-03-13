#include<iostream>
using namespace std;
struct ogrenci{
	char isim[50];
	int rulo;
	float puan;
}s[3];

int main(){
	
	cout<<"ogrenci bilgilerini giriniz:"<<endl;
	for(int i=0;i<3;i++){
		s[i].rulo=i+1;
		cout<<"Rulo numarasi "<<s[i].rulo<<", "<<endl;
		cout<<"adinizi giriniz:"<<endl;
		cin>>s[i].isim;
		cout<<"puan giriniz:"<<endl;
		cin>>s[i].puan;
		cout<<endl;	
		}
		
	cout<<"Bilgi Goruntuleme: "<<endl;
	for(int i=0;i<3;i++){
		cout<<"\nRulo numarasi: "<<i+1<<endl;
		cout<<"Ad: "<<s[i].isim<<endl;
		cout<<"Puan: "<<s[i].puan<<endl;
	}
}
