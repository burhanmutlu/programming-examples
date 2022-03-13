#include<iostream>
using namespace std;
int dogalsayi(int n){
	
	if(n!=0){
		return n+dogalsayi(n-1);
	}
}
int main(){
	
	int a;
	cout<<"bir sayi giriniz:"<<endl;
	cin>>a;
	cout<<"toplam: "<<dogalsayi(a);//recursive:kendi kendini cagýran
	
}
