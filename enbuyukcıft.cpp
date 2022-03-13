#include<iostream>
using namespace std;
int main(){

	int a,enb=-5;
	for(;;){
	cout<<"sayi giriniz:(cikmak icin -1 e basin...)"<<endl;
	cin>>a;
	if(a==-1)	break;
	if(a%2!=0){
	cout<<"cift sayi giriniz..."<<endl; continue;	}
	else{
		if(a>enb&&a%2==0){
			enb=a;	
		}
		else	continue;
	}
	}
	cout<<"En buyuk cift sayi: "<<enb;
}
