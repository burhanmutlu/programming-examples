#include<iostream>
#include<math.h>
using namespace std;

void fonk(double x){
	cout<<"f(x)=(logx+5x)^2\nx sayisini giriniz:"<<endl;
	cin>>x;
	cout<<pow(log10(x)+5*x,2);
}

int main(){
	
	int x;
	fonk(x);
}
