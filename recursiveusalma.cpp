#include<iostream>
using namespace std;
int usalma(int ,int );
int main(){
	int a,b;
	cout<<"taban ve us degeri giriniz:"<<endl;
	cin>>a>>b;
	cout<<a<<" ^ "<<b<<" = "<<usalma(a,b);
	
}
int usalma(int a,int b){
	if(b!=0){
		return a*usalma(a,b-1); //2^3= 2*2*2
	}
	else{
		return 1;//burası üst return değerini 1 ile çarpıyor.
	}
}
