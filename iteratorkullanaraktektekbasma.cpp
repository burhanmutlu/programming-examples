#include<iostream>
using namespace std;
int main(){
	
	string a;
	cout<<"metni giriniz:"<<endl;
	getline(cin,a);
	for(string::iterator it=a.begin();it!=a.end();it++){
		cout<<*it<<endl;
	}
	
	
}
