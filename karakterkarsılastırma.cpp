#include<iostream>
using namespace std;
int main(){
	
	string a,b;
	int tp;
	cout<<"iki metni giriniz:"<<endl;
	getline(cin,a);
	getline(cin,b);
	for(int i=0;i<a.length();i++){
		if(a.at(i)==b.at(i)){
			tp++;	
		}
	}
	cout<<"ayni karakter sayisi: "<<tp<<endl;
}
