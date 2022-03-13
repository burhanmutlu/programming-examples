#include<iostream>
using namespace std;
int main(){
	
	int a[]={1,4,8};
	cout<<a<<" "<<*a<<endl;
	cout<<a+1<<" "<<*(a+1)<<endl;
	cout<<a+2<<" "<<*(a+2)<<endl;
	cout<<a+3<<" "<<*(a+3)<<endl;
	cout<<a+4<<" "<<*(a+4)<<endl;
	cout<<a+5<<" "<<*(a+5)<<endl;
	cout<<a+6<<" "<<*(a+6)<<endl;
	for(int i=0;i<3;i++){
		cout<<i<<" "<<a[i]<<endl;
	}
}
