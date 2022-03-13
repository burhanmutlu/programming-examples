#include<iostream>
using namespace std;
int main(){
	label:
	int a;
	cout<<"bir yil girin:"<<endl;
	cin>>a;
	if(a%4==0){
		if(a%100==0){
			if(a%400==0){
				cout<<"bu bir artik yildir."<<endl;
			}
			else{
				cout<<"bu bir artik yil degildir."<<endl;
			}
		}
		else{
		cout<<"bu bir artik yildir."<<endl;	}
	}
	//4 e bölünmediði için.
	else{
	cout<<"bu bir artik yil degildir."<<endl;
}
	goto label;
}
