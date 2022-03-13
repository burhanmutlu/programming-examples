#include<iostream>
using namespace std;
int main(){
	
	int i=0,pass;
	string id;
	for(i;i<3;i++){
		cout<<"kullanici adi ve sifre giriniz:"<<endl;
			cin>>id>>pass;
		if(id=="burhan"&&pass==123){
			cout<<"hos geldiniz.."<<endl;
				break;	}
				
			else{
				if(i==2){
				cout<<"hesabiniz bloke oldu.."<<endl; break;}
				
			cout<<"tekrar deneyiniz:"<<endl;
			continue;
			}
		}
		
}
