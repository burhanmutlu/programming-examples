#include<iostream>
using namespace std;
int main(){
	
	string a;
	cout<<"metni giriniz:"<<endl;
	getline(cin,a);
	for(int i=0;i<a.length();i++){
		cout<<a.at(i)<<endl;
		cout<<a[i]<<endl;
	}
}
