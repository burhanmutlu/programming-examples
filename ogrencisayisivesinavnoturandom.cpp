#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

float avg(int l,int a[][3],int x){
	float ort=0;
	for(int k=0;k<l;k++){
		ort=ort+a[k][x];
	}
	return(float)ort/l;
}

int main(){
	
	label:
		int n;
		cout<<"lutfen ogrenci sayisini giriniz:"<<endl;
		cin>>n;
		int notlar[n][3];
		for(int i=0;i<n;i++){
			for(int j=0;j<3;j++){
				notlar[i][j]=rand()%100+1;
			}
		}
	cout<<"1.vize: "<<avg(n,notlar,0)<<endl;
	cout<<"2.vize: "<<avg(n,notlar,1)<<endl;
	cout<<"final: "<<avg(n,notlar,2)<<endl;
	goto label;
}
