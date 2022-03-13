#include<iostream>
using namespace std;
int f(int n){
	if(n>1)
		f(n-1);	//her fonksiyon için ayrý düþün 
			cout<<n;	//buraya gelmesi için koþuldan çýkmasý gerek
}
int main(){
	f(3);
}
