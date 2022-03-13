#include<iostream>
#include<cstring>
using namespace std;
int main(){
	
	string a="burhan",b="mutlu";
	string c="burhan",d="mutlu";
	a.append(b,0,3);// b-> 0 ilerle 3 unu al
	cout<<a<<endl;
	
	a.append(10u,'*');
	cout<<a<<endl;
	
	c.append(d.begin()+3,d.end());
	cout<<c<<endl;
}
