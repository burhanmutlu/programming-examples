#include<iostream>
#include <cmath>
#include<conio.h>
using namespace std;
int main(){
	
	int x,y,z;		float u,alan;
	cout<<"3 kenari giriniz:"<<endl;
	cin>>x;		cin>>y;		cin>>z;
	u=(x+y+z)/2.0;
	alan=pow((u*(u-x)*(u-y)*(u-z)),1/2.0);
	cout<<"Ucgenin Alani: "<<alan;
	getch;
}
