#include<iostream>
#include<stdio.h>
#include<cmath>
//#include<stdlib.h>
//#include<ctime>
//#define randnum(min, max) ((rand() % (int) (((max) + 1) - (min))) + (min))
using namespace std;

int random(int i);

int main(){
	int min;
	cin>>min;
	int i=random(min)%20;
	cout<<i;
	
}
int random(int i){
	int a=7*pow(7,i)/pow(2,i-4);
	return a;
}
