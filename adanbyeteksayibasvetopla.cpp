#include<iostream>
using namespace std;
int main(){
	
	int a,b,tp=0,t;
	for(;;){
		cout<<"iki farkli sayi giriniz:"<<endl;
			cin>>a>>b;
	if(a==b){
		cout<<"sayilar esit olmamali!"<<endl;
			continue;
	}
	else break;
		}
			if(a>b){
				t=a;
				a=b;
				b=t;
		}
			cout<<"1.tek sayilar\n2.cift sayilar"<<endl;
			cin>>a;

		switch(a){
		
		case 1:
		for(a;a<b+1;a++){
			if(a%2==1){
				cout<<"tek sayi: "<<a<<endl;
				tp+=a;
			}
		}
		cout<<"toplam: "<<tp;
		break;
		case 2:
		for(a;a<b+1;a++){
			if(a%2==0){
				cout<<"cift sayi: "<<a<<endl;
				tp+=a;
			}
		}
		cout<<"toplam: "<<tp;
}
}
