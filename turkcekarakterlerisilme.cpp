#include<iostream>//küçük harf giriniz
using namespace std;
int main(){
	
	char a[2000];
	cout<<"bir metin giriniz:"<<endl;
	gets(a);
	for(int i=0;a[i]!='\0';i++){
		
		if(a[i]==char(135)){
			cout<<'c';}
		else if(a[i]==char(141)){
			cout<<'i';
		}else if(a[i]==char(167)){
			cout<<'g';
		}else if(a[i]==char(129)){
			cout<<'u';
		}else if(a[i]==char(148)){
			cout<<'o';
		}else if(a[i]==char(159)){
			cout<<'s';
		}else{
				cout<<a[i];
		}
	}
	
}
