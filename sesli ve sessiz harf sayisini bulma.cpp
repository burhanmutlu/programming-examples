#include<iostream>
#include<algorithm>
using namespace std;

int sesli(string a){
	
	int ct=0,ct1=0;
	for(string::iterator it=a.begin();it!=a.end();it++){
		if(*it==' ')	continue;
		else if(*it=='a'||*it=='e'||*it=='i'||*it=='u'||*it=='o')ct++;
		else ct1++;
	}
	cout<<"sesli harf sayisi: "<<ct<<endl;
	cout<<"sessiz harf sayisi: "<<ct1<<endl;
}
int main(){
	
	string b;
	cout<<"Lutfen metni giriniz:"<<endl;
	getline(cin,b);
	sesli(b);
	
}
