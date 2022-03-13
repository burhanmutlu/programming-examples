#include<iostream>
using namespace std;
int main(){
	
	string a,b;
	cout<<"metni giriniz:"<<endl;
	getline(cin,a);
	getline(cin,b);
	cout<<a.compare(b)<<endl;
	cout<<"1=esit degil\n0=esit";
}
