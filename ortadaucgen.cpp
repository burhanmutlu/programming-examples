#include<iostream>
using namespace std;
int main(){
		
	int n,k;	
	cout<<"satir sayisini giriniz:"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){//5-0 5-1 boþluk.sadece sol tarafý düþün.
			cout<<" ";
		}
			k=0;
		while(k!=2*i+1){//2*0+1 2*1+1 --> 1 --> 3 ...
			cout<<"*";
			k++;
		}
		cout<<endl;
	}
}
