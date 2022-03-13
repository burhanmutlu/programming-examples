#include<iostream>
using namespace std;
int main(){
	
	int n,tp=0,tp1=0,k=0;
	cout<<"satir sayisini giriniz:"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			cout<<" ";
			tp++;
		}while(k!=2*i+1){
			if(tp<=n+1){
				cout<<i+k<<" ";
				tp++;
			}else{
				tp1++;
				cout<<i+k-2*tp1<<" ";
			}k++;
		}
		tp=tp1=k=0;
		cout<<endl;
	}
}
