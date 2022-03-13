#include<iostream>
using namespace std;
int main(){
	
	int a,b,c[20][20],d[20][20],tp[20][20];
	cout<<"satir ve sutun sayisini giriniz:"<<endl;
	cin>>a>>b;
		cout<<"ilk matris."<<endl;
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cout<<i+1<<". satir "<<j+1<<". sutun degeri: ";
			cin>>c[i][j];
		}
	}
	cout<<"ikinci matris."<<endl;
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cout<<i+1<<". satir "<<j+1<<". sutun degeri: ";
			cin>>d[i][j];
		}
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			tp[i][j]=c[i][j]+d[i][j];
			cout<<tp[i][j]<<"	";
		}
		cout<<endl;
	}
}
