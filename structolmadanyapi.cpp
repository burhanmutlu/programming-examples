#include<iostream>//bunu struct ilede yaptim 
using namespace std;
int main(){
	string isim[3];
	string soyisim[3];
	int numara[3];
	
	for(int i=0;i<3;i++){
		cout<<i+1<<". ogrenci bilgilerini girin: "<<endl;
		cin>>isim[i]>>soyisim[i]>>numara[i];
	}
	
		for(int i=0;i<3;i++){
		cout<<i+1<<". ogrenci bilgileri: "<<endl<<isim[i]<<endl<<soyisim[i]<<endl<<numara[i]<<endl;
	}
	
	
}
