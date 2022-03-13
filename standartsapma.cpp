#include<iostream>
#include<cmath>
using namespace std;
float sp(float b[]);

int main(){
	
	float a[10];
	cout<<"10 sayi giriniz:"<<endl;
	for(int i=0;i<10;i++)
	cin>>a[i];
	cout<<endl<<sp(a);
}

float sp(float a[10]){
	float tp=0,ort,standart=0;
	for(int i=0;i<10;i++){
		tp+=a[i];
	}
	ort=tp/10.0;
	for(int i=0;i<10;i++){
		standart+=pow(a[i]-ort,2);
	}
	return pow(standart/10,1/2.0);
	
}





