#include<iostream>
using namespace std;

struct students{
	string name;
	int number;
	float point;	
}s;

int main(){
	
	cout<<"sirasiyla adinizi, numaranizi ve puaninizi girin:";
	cin>>s.name>>s.number>>s.point;
	cout<<"ad: "<<s.name<<endl<<"no: "<<s.number<<endl<<"puan: "<<s.point;
	
	
}
