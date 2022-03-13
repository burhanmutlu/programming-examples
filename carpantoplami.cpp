#include<iostream>
using namespace std;
int carpantop(int );

int main(){
	
	for(int i=5;i<15;i++){
		cout<<i<<" sayisinin carpan toplami: "<<carpantop(i)<<endl;
	}
}
int carpantop(int x){
	int tp=0;
	for(int i=2;i<=x/2;i++){
		if(x%i==0){
			tp+=i;
		}
	}
	return tp;
}
