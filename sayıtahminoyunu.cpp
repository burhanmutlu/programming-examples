#include<iostream>//1-99 arası sayı tahmin etme
#include<stdlib.h>
#include<ctime>
using namespace std;

int asal(int n){
	int tp=0;
	for(int i=2;i<n;i++){
		if(n%i==0){
			++tp;
		}
	}
	if(tp==0){
		cout<<"bu sayi asaldir"<<endl;
	}
}

int raktop(int n){
		int k,top=0;
	for(;;){
	
		k=n%10;
		n=n/10;
		top=top+k;
		if(n<10){
				top=top+n;
			break;
	}
}
cout<<"rakamlar toplami: "<<top<<endl;
		return top;
	}


int main(){
	
	int a,b;
		srand(time(0));
		a=rand()%98+1;
		cout<<"1-99 arasindaki sayiyi tahmin ediniz:"<<endl;
		for(int i=1;;i++){
		
		cin>>b;
		
		if(a>b){
			cout<<"daha buyuk sayi giriniz."<<endl;
			if(a%2==0){
				cout<<"cift sayidir"<<endl;
			}
			else{
				cout<<"tek sayidir"<<endl;
			}
			asal(a);
			raktop(a);
			continue;
		}
		else if(a<b){
			cout<<"daha kucuk sayi giriniz."<<endl;
			if(a%2==0){
				cout<<"cift sayidir"<<endl;
			}
			else{
				cout<<"tek sayidir"<<endl;
			}
				asal(a);
					raktop(a);
			continue;
		}
		else{
			cout<<"Tebrikler...  "<<i<<". adimda buldunuz..."<<endl;
			break;
			}
}
}
