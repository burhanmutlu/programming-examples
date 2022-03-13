#include<iostream>
#include<cmath>
using namespace std;
int asal(int );
int bs(int );

int main(){
	
	int a,i,b[20],j=0,d[20],temp2,tp=0;
	cout<<"bir sayi giriniz:";
	cin>>a;
	int temp=a;
	while(a!=0){
	int k=a%10;
	a=a/10;
	b[j]=k;
	j++;}
	a=temp;
	for(i=2;i<pow(10,bs(a));i++){
		j=0;
		temp2=i;
		while(i!=0){
	int k=i%10;
	i=i/10;
	d[j]=k;
	j++;}
	i=temp2;
	for(int g=0;g<bs(i);g++){//3231
		for(j=0;j<bs(a);j++){//123
		if(d[g]/*i deger*/==b[j]/*girilen sayi*/&&asal(i)){
			tp++;	
		 }
			}}
			if(tp>=bs(i)){
				cout<<i<<" ";
			}
			tp=0;
	}
}

int asal(int a){
	for(int i=2;i<=a/2;i++){
		if(a%i==0){
			return 0;
			break;
		}
	}
}

int bs(int a){
	int tp=0;
	while(a!=0){
	int k=a%10;
	a=a/10;
		tp++;
	}
	return tp;
}
