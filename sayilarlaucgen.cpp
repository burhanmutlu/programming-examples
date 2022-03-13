#include<iostream>
using namespace std;
int main(){
	int n,tp=1;
	cout<<"satir sayisini giriniz:"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<i+1;j++){
			cout<<tp<<" ";
			tp++;
		}	cout<<endl;
	}
}
