#include<iostream>
using namespace std;
int main(){
	
	for(int i=0;i<20;i++){
		cout<<"				";
		for(int j=0;j<i;j++){
			if(i==0||j%3==0)
			cout<<"--------  ";
		}
		cout<<endl;
	}
}
