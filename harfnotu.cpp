#include<iostream>//harf notu hesaplama
using namespace std;
int main(){
	
	int x;
	cout<<"Notunuzu Giriniz: "<<endl;
	cin>>x;
	if(x>=90&&x<=100){
		cout<<"AA"<<endl;
	}
	else if(x>=85&&x<=89){
		cout<<"AB"<<endl;
	}
	else if(x>=80&&x<=84){
		cout<<"BA"<<endl;
	}
	else if(x>=75&&x<=79){
		cout<<"BB"<<endl;
	}
	else if(x>=70&&x<=74){
		cout<<"CB"<<endl;
	}
	else if(x>=65&&x<=69){
		cout<<"CC"<<endl;
	}
	else if(x>=60&&x<=64){
		cout<<"DC"<<endl;
	}
	else if(x>=55&&x<=59){
		cout<<"DD"<<endl;
	}
	else if(x>=50&&x<=54){
		cout<<"FD"<<endl;
	}
	else if(x>=0&&x<=49){
		cout<<"FF"<<endl;
	}
	else{
		cout<<"Hatali Giris"<<endl;
	}
}
