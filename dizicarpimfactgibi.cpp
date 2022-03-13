#include<iostream>
using namespace std;

int carp(int matris[],int size){
	int carpim=1,i=0;
	for(;i<size;i++){
		carpim *=matris[i];
	}
	cout<<"sonuc: "<<carpim;
	return carpim;
}

int main(){
	
	int sayilar[5];
	cout<<"5 sayi giriniz:"<<endl;
	for(int i=0;i<5;i++){
		cin>>sayilar[i];
		cout<<i+1<<" sayi girdiniz."<<endl;
	}
	carp(sayilar,5);
}
