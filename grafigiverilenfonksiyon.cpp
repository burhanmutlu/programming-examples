#include<iostream>
using namespace std;
int main(){
	
	int x,y;
	cout<<"x degerini giriniz:"<<endl;
	cin>>x;
	if(x<0){
		cout<<"y: 1"<<endl;
	}
	else if(x>=0&&x<=2){
		cout<<"y: "<<x<<endl;
	}
	else if(x>2&&x<=4){
		cout<<"y: 3"<<endl;
	}
	else if(x>4){
		cout<<"y: "<<4-x<<endl;
	}
}
