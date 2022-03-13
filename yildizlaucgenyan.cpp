#include<iostream>
using namespace std;
int main(){
	
	for(int i=0;i<6;i++){
		for(int k=0;k<i;k++){
			cout<<"	";
		}
		cout<<"*";
		cout<<endl<<endl;
	}
	for(int i=0;i<5;i++){
		for(int k=5;k>i+1;k--){
			cout<<"	";
		}
		cout<<"*";
		cout<<endl<<endl;
	}
}
