#include<iostream>
#include<cmath>
using namespace std;
int us(int a){
	int i=0;
	while(pow(2,i)<=a){
		i++;
		if(a==pow(2,i)){
			return 1;
		}
	}
}
int main(){
	int a=1,b=1,c=100,d=1;
	while(b<=30){
	while(a%15!=0){
		++a;
	}
			cout<<a<<" ";
			a++;
	while(b%5!=0){
		++b;
	}
			cout<<b<<" ";
			b++;
	while(c%10!=0){
		--c;
	}
			cout<<c<<" ";
			c--;	
	while(!(us(d))){
		d++;
	}
			cout<<d<<" ";
			d++;	
	cout<<endl;
	}
}
