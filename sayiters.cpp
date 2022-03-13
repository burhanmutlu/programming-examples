#include<iostream>
using namespace std;
int main(){
	
	int n,k;
	cout<<"Sayi Giriniz:"<<endl;
	cin>>n;
	for(;;){
		k=n%10;
		n=n/10;
		cout<<k;
		if(n>0){
			cout<<n;
			break;
		}
		
	}
	
}
