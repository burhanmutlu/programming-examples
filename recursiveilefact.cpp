#include<iostream>
using namespace std;
int fact(int);

int main(){
	int a;
	cout<<"bir sayi giriniz:"<<endl;
	cin>>a;
	cout<<a<<"'nin faktoriyeli: "<<fact(a);
}
int fact(int n){
	if(n>2){//1 le carpmaya gerek yok.
		return n*fact(n-1);
			//n=5 --> 5*4*3*2=120
	}
}
