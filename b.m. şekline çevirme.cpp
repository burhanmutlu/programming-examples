#include<iostream>
#include<algorithm>
using namespace std;

string kisaltma(string a){
	string b=" ";
	a=b+a;//baslangicta otomatik olarak bosluk birakir.
	for(string::iterator it=a.begin();it!=a.end();it++){
		if(*it==' ') b=b+*(it+1)+".";
	}
		b.erase(remove(b.begin(),b.end(),' '),b.end());//ön taraftaki boþluðu temizlemektedir
		return b;
	}

int main(){
	string x;
	printf("Lutfen kisaltilacak metni giriniz:");
	getline(cin,x);
	cout<<kisaltma(x);
}
