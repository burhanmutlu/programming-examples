#include<iostream>
using namespace std;

int terscevir(int a){
	int k,sayi=0;
	for(;a!=0;){
		k=a%10;
		a=a/10;
		sayi=(sayi*10)+k;	
	}return sayi;
}

int asal(int a){
	for(int i=2;i<=a/2;i++){
		if(a%i==0){
			return false;
			break;
		}
	}
}

int ikili(int a){
	int k,sayi=0;
	for(;a>9;){
		k=a%10;
		a=a/10;
		sayi=(sayi*10)+k;
	}
	return sayi;
}

int ikili2(int a){
	int k,sayi=0;
	for(int i=0;a!=0;i++){
		k=a%10;
		a=a/10;
		if(i!=0){
		sayi=(sayi*10)+k;
		}
	}
	return sayi;
}
int main(){
	int a;
	for(int i=100;i<1000;i++){
		a=terscevir(i);
		bool b=asal(i)&&asal(a)&&asal(ikili(a))&&asal(ikili(i))&&asal(ikili2(a))&&asal(ikili2(i));
		if(i<a&&b==true){
			cout<<i<<" ";
		}
	}
}
