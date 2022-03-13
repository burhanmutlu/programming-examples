#include<iostream>
using namespace std;
int bitseloperator(int , int );

int main(){
	
	int a,b;
	cout<<"iki sayi giriniz:"<<endl;
	cin>>a>>b;
	cout<<bitseloperator(a,b);
}
int bitseloperator(int x,int y){
	
	int a=x&y;
	int b=y&x;
	cout<<a-b;
	
	
}

