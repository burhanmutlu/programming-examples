#include<iostream>//ctrl+space = hazýr fonksiyonlar
using namespace std;
int main(){
	
	int islem;
	string a;
	cout<<"metin giriniz:"<<endl;
	getline(cin,a);
	cout<<"Yapilacak Islemi Secin:\n1.buyuk harfe cevirme\n2.kucuk harfe cevirme\n3.bas harfleri buyutme\n";
	cin>>islem;
	switch(islem){
		case 1:
		for(int i=0;i<a.size();i++){
		if(a[i]>=97&&a[i]<123){
			a[i]=a[i]-32;
			cout<<a[i];
		}
		else{
			cout<<a[i];
		}
	}break;
	
	case 2:
		for(int i=0;i<a.size();i++){
		if(a[i]<91&&a[i]>=65){
			a[i]=a[i]+32;
			cout<<a[i];
		}else{
			cout<<a[i];
		}
	}break;
	
	case 3:
		for(int i=0;i<a.size();i++){
			if(a[i]==' '&&a[i+1]>=97&&a[i+1]<123){
				a[i+1]=a[i+1]-32;
				cout<<a[i]<<a[i+1];
				i++;
			}else if(i==0&&a[i]>=97&&a[i]<123){
				a[i]=a[i]-32;
				cout<<a[i];
			}else{
					cout<<a[i];
			}
		}break;
		default:
			cout<<"hatali giris..!";
	}
}
