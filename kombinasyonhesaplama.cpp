#include<iostream>
using namespace std;

int fact(int n){
	int fakto=1;
	for(int i=1;i<=n;i++){
		fakto*=i;
	}
	return fakto;
}
int main(){
	
	float x,y,f1,f2,f3,c;
	cout<<"n ve r degerlerini giriniz:"<<endl;
	cin>>x;				cin>>y;
	f1=fact(x);		f2=fact(y);		f3=fact(x-y);
	c=f1/(f2*f3);
	cout<<"Kombinasyon Degeri: "<<c;
}
