#include<iostream>
using namespace std;
int main(){
	int a[20],tp=0,t=0,tp2[20],i=0;
	cout<<"sayi giriniz:(cikmak icin -1 e basin.)"<<endl;
	do{
		tp++;
		cin>>a[i];
		i++;
	}while (a[i-1]!=-1);
	
	for(int i=0;i<tp;i++){
		for(int j=i+1;j<=tp;j++){
			if(a[i]==a[j]){
				i++;
			}else if(j==tp-1&&a[i]!=a[j]){
				tp2[t]=a[i];
				t++;
			}
		}
	}
	for (int i=0; i<t;i++){
		cout<<tp2[i]<<" ";
	}
	
	
	
}
