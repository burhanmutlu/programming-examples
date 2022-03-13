#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int sayi=0,i=0,k,a,b;
	cout<<"bir sayi ve taban degerini giriniz:";
	cin>>a>>b;
	while(a!=0){
		k=a%10;
		a/=10;
		sayi=sayi+pow(b,i)*k;
		i++;
	}
	cout<<b<<"'den 10 luk tabana cevrilen deger: "<<sayi;
}
