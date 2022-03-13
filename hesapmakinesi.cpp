#include<iostream>//basit hesap makinesi
using namespace std;
int main(){
	
	int islemler,a,b,tp;
	
	cout<<"Islemler:\n1.Toplama Islemi\n2.Cikarma Islemi\n3.Carpma Islemi\n4.Bolme Islemi"<<endl;
	cin>>islemler;
	if(islemler==1||islemler==2||islemler==3||islemler==4){
	switch(islemler){
		case 1:
			cout<<"Iki Sayi Giriniz:"<<endl;
			cin>>a>>b;
			tp=a+b;
			cout<<tp<<endl;
			break;
		case 2:
			cout<<"Iki Sayi Giriniz:"<<endl;
			cin>>a>>b;
			tp=a-b;
			cout<<tp<<endl;
			break;
		case 3:
			cout<<"Iki Sayi Giriniz:"<<endl;
			cin>>a>>b;
			tp=a*b;
			cout<<tp<<endl;
			break;
		case 4:
			cout<<"Iki Sayi Giriniz:"<<endl;
			cin>>a>>b;
			tp=a/b;
			cout<<tp<<endl;
			break;
	}
	}
	else{
		cout<<"Hatali Giris"<<endl;
	}
	
	
}

