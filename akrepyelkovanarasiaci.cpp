#include<iostream>
#include<cmath>
using namespace std;
float aci(int a,int b){
	float c=30*abs(a-b/5.0);
	cout<<c<<" derece.";
	return c;
}
int main(){
	int s,d;
	cout<<"saat ve dakika degerini giriniz:";
	cin>>s>>d;
	aci(s,d);
}
