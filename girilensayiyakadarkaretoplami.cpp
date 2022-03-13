#include<iostream>/*Kullanýcýdan 1'den büyük bir tam sayý girmesini isteyin ve 1'den 
girilen tam sayýya kadar olan sayýlarýn karelerinin toplamýný hesaplayan kodu yazýnýz.*/
using namespace std;
int main(){
	
	int a,tp=0,k;
	cout<<"1 den buyuk sayi giriniz:"<<endl;
	cin>>a;
	for(int i=1;i<=a;i++){
		k=i*i;
		tp+=k;
	}
	cout<<"kare toplami: "<<tp;
	
}
