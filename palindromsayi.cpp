#include<iostream>
using namespace std;
int main(){
	
	int a,sayi=0,k,org;
	cout<<"bir sayi giriniz:"<<endl;
	cin>>a;
	org=a;
	while(a!=0){//ornegin 9/10= sýfýrdýr 9 da 10 hiç yoktur.
	k=a%10;
	a=a/10;
	sayi=(sayi*10)+k;//a 1 olursa kalanda 1 olur ve anýn son elemanýný basar.
}
	cout<<"tersi: "<<sayi<<endl;
	
	if(org==sayi){
		cout<<"bu sayi palindrom sayidir."<<endl;
	}
	else{
		cout<<"bu sayi palindrom sayi degildir."<<endl;
	}
}
