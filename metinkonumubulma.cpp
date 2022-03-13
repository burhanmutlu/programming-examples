#include<iostream>
using namespace std;
int main(){
	
	
	string a,b;
	cout<<"metni giriniz:"<<endl;
	getline(cin,a);
	cout<<"aranacak metni giriniz:"<<endl;
	getline(cin,b);
	cout<<"konumu: "<<a.find(b)<<endl;
}
