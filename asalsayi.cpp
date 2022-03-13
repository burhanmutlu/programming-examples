#include<iostream>
using namespace std;
int main(){
	
	int a;
	bool asal=true;
	cout<<"sayi giriniz:";
	cin>>a;
	if(a==0 or a==1){
		asal=false;
	}
	else{
		for(int i=2;i<a/2;i++){//20/2=10 20, 10 dan sonraki sayýlara bölünmez
			if(a%i==0){
				asal=false;
				break;
			}
		}
	}
	if(asal){//true ise çalýþýr
		cout<<"bu bir asal sayidir.";
	}
	else{
		cout<<"bu bir asal sayi degildir.";
	}
}
