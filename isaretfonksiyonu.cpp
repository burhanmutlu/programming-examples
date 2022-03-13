#include<iostream>
#include<cmath>
using namespace std;
int main(){

	float x,fx;
	cout<<"x sayisini giriniz:"<<endl;
	cin>>x;
	fx=pow(x,2)-5*x+3;
	if(fx<0){
		cout<<"Fonksiyonun Isareti: -1"<<endl;
	}
	else if(fx==0){
		cout<<"Fonksiyonun Isareti: 0"<<endl;
	}
	else if(fx>0){
		cout<<"Fonksiyonun Isareti: 1"<<endl;
	}
}
