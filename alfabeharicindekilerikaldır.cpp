#include<iostream>
using namespace std;
int main(){
		
	string a,b;
	int i=0,tp=0;
	cout<<"bir metin giriniz:"<<endl;
	getline(cin,a);
	while(a[i]!='\0'){
		tp++;
		i++;
	}
	for(i=0;i<tp;i++){//
		if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z'){
			b+=a[i];	//c de b[j++]+=a[i] þeklinde yapardýk.
		}
	}
		cout<<b;//bunu direkt üsttede halledebilirdik ama farklý yerde basma durumu olabilir.

}
