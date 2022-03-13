#include<iostream>
using namespace std;

int orthesap(float a,float b){
	
	float ort;
		cout<<"Iki Sayi Giriniz:"<<endl;
	for(;;){
	cin>>a;
	cin>>b;
	if(a>100||b>100){
		cout<<"0-100 Arasi Deger Giriniz..."<<endl;
		continue;
	}
	else{
	ort=(a+b)/2.0;
	if(ort>=50){
		cout<<"Ortalama: "<<ort<<endl;
		cout<<"Gectiniz..."<<endl;
	}
	else{
		cout<<"Ortalama: "<<ort<<endl;
		cout<<"Kaldiniz..."<<endl;
	}
	break;
}}}



int main(){
	
	float x,y;
	orthesap(x,y);

}
