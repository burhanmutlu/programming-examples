#include<iostream>
using namespace std;
int main(){
	
	string a;
	cout<<"metni giriniz:"<<endl;
	getline(cin,a);
	cout<<"size: "<<a.size()<<endl;
	cout<<"length: "<<a.length()<<endl;
	cout<<"capacity: "<<a.capacity()<<endl;
	
}
