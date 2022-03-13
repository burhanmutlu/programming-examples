#include<iostream>
using namespace std;
int main(){
	
	int a[10][10],b[10][10],mult[10][10],r1,c1,r2,c2,i,j,k;
	while(c1!=r2){	//1.sutun degeri 2.satir degerine esit olmalýdýr.
	cout<<"ilk matrisin satir ve sutun degerini giriniz:";
	cin>>r1>>c1;
	cout<<"ikinci matrisin satir ve sutun degerini giriniz:";
	cin>>r2>>c2;
	}
	cout<<endl<<"1.matrisin degerlerini giriniz:"<<endl;
	for(i=0;i<r1;i++)
		for(j=0;j<c1;j++){
			cout<<"a ogesini girin "<<i+1<<j+1<<" : ";
			cin>>a[i][j];
		}
		cout<<endl<<"2.matrisin degerlerini giriniz:"<<endl;
		for(i=0;i<r2;i++)
			for(j=0;j<c2;j++){
				cout<<"b ogesini girin "<<i+1<<j+1<<" : ";
				cin>>b[i][j];
			}
		for(i=0;i<r1;i++)
			for(j=0;j<c2;j++)
				mult[i][j]=0;	//tp matris baþlangýç degerini 0 yapmalýyýz
			
	for(i=0;i<r1;i++) //1. satira kadar
		for(j=0;j<c2;j++)//2. sutuna kadar
			for(k=0;k<c1;k++){//1. sutuna kadar
				mult[i][j]+=a[i][k]*b[k][j];
			}
	
	cout<<endl<<"matris degeri: "<<endl;
	for(i=0;i<r1;i++)
		for(j=0;j<c2;j++){
			cout<<" "<<mult[i][j];
			if(j==c2-1)
				cout<<endl;
		}
}
