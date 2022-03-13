#include<iostream>//girilen sayidan kucuk degerleri ekrana basar
using namespace std;
int main(){
	
	int n,ilk=0,ikinci=1,yeni;
	cout<<"n sayisi giriniz:";
	cin>>n;
	cout<<ilk<<", "<<ikinci<<", ";
	yeni=ilk+ikinci;
	for(;yeni<=n;){
		cout<<yeni<<", ";
		ilk=ikinci;
		ikinci=yeni;
		yeni=ilk+ikinci;
	}
}
