#include<iostream>
using namespace std;
int main(){
	int tp=0,i=0;
	char a[10];
	cout<<"bir sayi giriniz:"<<endl;
	cin>>a;
	while(a[i]!='\0'){
		tp++;
		i++;
	}

		for(i=0;i<tp/2;i++){
			int temp=a[i];
			a[i]=a[tp-1-i];
			a[tp-1-i]=temp;	
	}
	for(i=0;i<tp;i++){
		cout<<a[i];
	}
}
