#include<iostream>
using namespace std;
typedef struct karmasik{
	float reel;
	float imaj;
}karmasikSayilar;

karmasikSayilar karSayiEkle(karmasik, karmasik);

int main(){
	
	karmasikSayilar sayi1,sayi2,tp;
	char isaret;
	
	cout<<"1. karmasik sayiyi giriniz:"<<endl;
	cout<<"once reel sonra imajiner kismi giriniz:"<<endl;
	cin>>sayi1.reel>>sayi1.imaj;
	
	cout<<"2. karmasik sayiyi giriniz:"<<endl;
	cout<<"once reel sonra imajiner kismi giriniz:"<<endl;
	cin>>sayi2.reel>>sayi2.imaj;
	
	tp=karSayiEkle(sayi1,sayi2);
	isaret=(tp.imaj>0) ? '+' : '-';
	tp.imaj=(tp.imaj>0) ? tp.imaj : -tp.imaj;
	
	cout<<"toplam "<<tp.reel<<isaret<<tp.imaj<<"i"<<endl;
	
}
karmasikSayilar karSayiEkle(karmasik num1,karmasik num2){
	karmasik temp;
	temp.imaj=num1.imaj+num2.imaj;
	temp.reel=num1.reel+num2.reel;
	return temp;
}
