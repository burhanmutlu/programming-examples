#include<iostream>
using namespace std;
int main(){
	
	int a,b,obeb;
	cout<<"iki sayi giriniz:";
	cin>>a>>b;
	if(b>a){
		int temp=b;
		b=a;
		a=temp;
	}
	for (int i = 0; i < b; i++) {
        if (a % i == 0 && b % i ==0) {
            obeb = i;
        }
    }

    cout<<obeb;
	
}
