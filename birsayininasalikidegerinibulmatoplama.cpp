#include<iostream>
using namespace std;

int asal(int a){
	bool chk;
	for(int i=2;i<=a/2;i++){
		if(a%i==0){
			return chk=false;
			break;
		}
	}
}

int main(){
	
	int a;
	cout<<"bir sayi giriniz:";
	cin>>a;
	for(int i=2;i<=a/2;i++){
		for(int j=2;j<=a;j++){
			if(asal(i)&&asal(j)&&(i+j==a)){
				cout<<a<<" = "<<i<<" + "<<j<<endl;
			}
		}
	}
}
