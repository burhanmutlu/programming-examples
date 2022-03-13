#include<iostream>
using namespace std;
int main(){
	
	int a[3][3],b[3][3],carp[3][3];
	cout<<"ilk matris degerini giriniz:"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>a[i][j];
		}
	}
	cout<<"ikinci matris degerini giriniz:"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>b[i][j];
		}
	}
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			carp[i][j]=a[i][j]*b[i][j];
			cout<<carp[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	
	
	
}
