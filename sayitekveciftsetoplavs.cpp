#include<iostream>
using namespace std;
int main(){
	
	int x,y,tp=0;
	cout<<"iki sayi giriniz:"<<endl;
	cin>>x>>y;
	if(x%2==0&&y%2==0){
		tp=x+y;
		cout<<tp;
	}
	else if(x%2==1&&y%2==1){
		tp=-x-y;
		cout<<tp;
	}
	else if((x%2==1&&y%2==0)||(x%2==0&&y%2==1)){
		cout<<"iki deger farkli."<<endl;
	}
	
}
