#include <iostream>
using namespace std;
int main(){
	char a,alfabe='A';
	cout<<"harf giriniz:";
	cin>>a;
	for(int i=0;i<=a-'A';i++){
		for(int j=0;j<=i;j++){
			cout<<alfabe;	
		}
		alfabe++;
		cout<<endl;
	}
}
