#include<iostream>//a^2+b^2=c^2 ---> c=(a^2+b^2)^1/2
#include<cmath>
using namespace std;
int main(){
	
	int a,b;	float hipo;
	cout<<"iki dik kenari giriniz: "<<endl;
	cin>>a;		cin>>b;
	hipo=pow(pow(a,2)+pow(b,2),1/2.0);
	cout<<"Hipotenus: "<<hipo<<endl;
	
}
