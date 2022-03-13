#include<iostream>
using namespace std;
int main(){
	
	int a,b,tp=0,tp2=0;
	cout<<"iki sayi giriniz:";
	cin>>a>>b;
	for(int i=1;i<=a/2;i++){
		if(a%i==0){
			tp +=i;
		}
	}
	for(int i=1;i<=b/2;i++){
		if(b%i==0){
			tp2 +=i;
		}
	}
	if(tp==b&&tp2==a)		cout<<"arkadas sayilardir.";
	else 	cout<<"arkadas sayilar degildir.";
	
}
