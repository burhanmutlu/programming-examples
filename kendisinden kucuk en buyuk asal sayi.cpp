#include<iostream>//kendisinden kucuk en buyuk asal sayi
using namespace std;
int main(){
	int x;
	cout<<"sayi giriniz:";
	cin>>x;
	for(int i=x;i>=2;i--){
		int asal=1;
		for(int j=2;j<i;j++){
			if(i%j==0)
			asal=0;
		}
		if(asal==1){
			cout<<i;
		
		}
	}
	
	
}
