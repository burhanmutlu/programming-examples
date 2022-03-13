#include<iostream>
using namespace std;
struct uzaklik{
	int fit;
	float inc;
}d1,d2,tp;

int main(){
	
	cout<<"ilk fit ve inc degerini giriniz:"<<endl;
	cin>>d1.fit>>d1.inc;
	cout<<"ikinci fit ve inc degerini giriniz:"<<endl;	
	cin>>d2.fit>>d2.inc;
	
	tp.fit=d1.fit+d2.fit;
	tp.inc=d2.inc+d1.inc;
	if(tp.inc>12){
		++tp.fit;
		tp.inc-=12;
	}
	cout<<endl<<tp.fit<<" fit "<<tp.inc<<" inc";
	
}
