#include<iostream>
using namespace std;
int ondalik(int,int);
int main(){
	
	int a,b;
	cout<<"taban degerini giriniz:"<<endl;
	cin>>a;
	cout<<"bir sayi giriniz:"<<endl;
	cin>>b;
	cout<<b<<"'nin "<<a<<"'lik taban karsiligi: "<<ondalik(a,b);
}
int ondalik(int a,int b){
	int i=1,sayi=0,k;
	while(b!=0){
		k=b%a;
		b=b/a;
		sayi=sayi+k*i;//5 + 20 + 300 = 325
		i*=10;//sayi ters geldiği için burda düzelir.
	}
	return sayi;
}
