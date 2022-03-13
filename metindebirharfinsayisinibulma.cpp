#include<iostream>
using namespace std;
int main(){
	
	string a;//c de char kullanýrdýk 
	char b;
	int tp=0;
	cout<<"bir metin giriniz:"<<endl;
	getline(cin,a);
	cout<<"aranan harfi yaziniz:"<<endl;
	cin>>b;
	for(int i=0;i<a.size();i++){
		if(a[i]==b){
			tp++;
		}
	}
	cout<<tp;
}
