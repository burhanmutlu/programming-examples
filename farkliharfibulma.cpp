#include<iostream>
#include<ctime>
#include<stdlib.h>
using namespace std;
int main(){
	srand(time(NULL));
	int i,j,temp,x,y;
	char a,s,z;
	cout<<"kac satir ve sutunlu olacagini girin:"<<endl;
	cin>>j>>i;
	temp=i;
	x=rand()%i+1;
	y=rand()%j+1;
	z=rand()%26+65;
	for(;;){
		s=rand()%26+65;
		if(s==z){
			continue;
		}
		else{
			break;
		}
	}
	
	for(i=j;i>0;i--){
		for(j=temp;j>0;j--){
			if(j==y&&i==x){
				cout<<s;
				continue;
			}
			cout<<z;
		}
		cout<<endl;
	}
	cout<<"farkli harfi girin:"<<endl;
	cin>>a;
	if(a==s){
		cout<<"tebrikler..."<<endl;
	}
	else{
		cout<<"kaybettiniz..."<<endl;
	}
	
}
