#include<iostream>

using namespace std;

int main(){
	
	int x;
	cout<<"Bir sayi giriniz:"<<endl;
	cin>>x;
	for(int i=0;i<x;i++){
		for(int j=0;j<x;j++){
			if((i==x/2||j==x/2)||(x%2==0&&(i==x/2-1||j==x/2-1))){
				cout<<"1";
			}
			else{
				cout<<"0";
			}
		}
		cout<<endl;
	}
	
}
