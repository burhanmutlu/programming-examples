#include<iostream>
using namespace std;
int main(){
	int a[10][10],degistirme[10][10],satir, sutun, i ,j;
	cout<<"matrisin satir ve sutun degerini giriniz:";
	cin>>satir>>sutun;
	cout<<"\nmatris degerlerini giriniz: "<<endl;
	
	for(int i=0;i<satir;i++){
		for(int j=0;j<sutun;j++){
			cout<<"a matris degerlerini giriniz: "<<i+1<<j+1<<": ";
			cin>>a[i][j];
		}
	}
	cout<<"\ngirilen matris: "<<endl;
	for(int i=0;i<satir;i++){
		for(int j=0;j<sutun;j++){
			cout<<" "<<a[i][j];
			if(j==sutun-1)
			cout<<endl<<endl;
		}
	}
	cout<<"degistirilmis matris: "<<endl;
	for(int i=0;i<sutun;i++){
		for(int j=0;j<satir;j++){
			cout<<" "<<a[j][i];
			if(j==satir-1)
			cout<<endl<<endl;
		}
	}
}
