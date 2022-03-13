#include<iostream>//yeni madde olduðunu belirtmek için . dan sonra 1 boþluk býrakýn.
using namespace std;
int main(){
	int b;
	string a;
	cout<<"metin giriniz:"<<endl;
	getline(cin,a);
	cout<<"madde isaretini seciniz:\n1. "<<char(175)<<"\n2. "<<char(254)<<"\n3. "<<char(126)<<endl;
	cin>>b;
	int c[]={175,254,126};
	for(int i=0;a[i]!='\0';i++){
		if(a[i+1]=='.'&&a[i+2]==' '){
			cout<<a[i]<<"\n"<<char(c[b-1]);
			i+=2;
		}
		else if(i==0){
			cout<<char(c[b-1])<<a[i];
		}
		else{
			cout<<a[i];
		}
	}	
}
