#include<iostream>
using namespace std;
int main(){
	string a;
	cout<<"adini ve soyadinizi giriniz:"<<endl;
	getline(cin,a);
	cout<<a[0]<<endl;
	for(int i=0;a[i]!='\0';i++){
		if(a[i]==' '){
			cout<<a[i+1]<<endl;
		}
	}
	
}
