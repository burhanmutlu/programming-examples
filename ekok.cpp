#include<iostream>
using namespace std;
int main(){
	
	int a,b;
	cout<<"iki sayi giriniz:";
	cin>>a>>b;
	for(;a!=b;){
		if(a>b){
			a-=b;
		}
		else{
			b-=a;
		}
	}
	cout<<b;
}
