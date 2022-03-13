#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
	char a,x;
	srand(time(0));
	a=rand()%26+97;
	for(int i=1;i<=10;i++){
		cout<<"harf tahmin ediniz..."<<endl;
		cin>>x;
		if(a==x){
			cout<<"Tebrikler...		"<<i<<". adimda buldunuz."<<endl;
			break;
		}
		else{
			continue;
		}
	}
	
	
	
}
