#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	
	string a;
	getline(cin,a);
	cout<<a.size()<<endl;
	a.erase(remove(a.begin(),a.end(),'e'),a.end());
	cout<<a.size()<<endl;
	
	
	
}
