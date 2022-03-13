#include<iostream>
using namespace std;
int asal(int a){
	for(int i=2;i<=a/2;i++){
		if(a%i==0){
			return 0;
			break;
		}
	}
}

int main(){
	
	int b,c,d,tp=0;
	cout<<"3 sayi giriniz:"<<endl;
	cin>>b>>c>>d;
	for(int i=10;i<100;i++){
		if(asal(i)&&k<3){
			tp=tp+i;
			k++;
		}
	}
	
	
	
}
