#include<iostream>
using namespace std;
int main(){
	
	float b,k,bki;
	cout<<"boyunuzu m cinsinden giriniz:"<<endl;
	cin>>b;
	cout<<"kilonuzu kg cinsinden giriniz:"<<endl;
	cin>>k;
	bki=k/(b*b);
	
	if(bki<18.5){
		cout<<"Zayif."<<endl;
	}
	else if(bki>=18.5&&bki<25){
		cout<<"Normal."<<endl;
	}
	else if(bki>=25&&bki<30){
		cout<<"Fazla Kilolu."<<endl;
	}
	else if(bki>=30&&bki<35){
		cout<<"1.Derece Obez."<<endl;
	}
	else if(bki>=35&&bki<40){
		cout<<"2.Derece Obez."<<endl;
	}
	else if(bki>=30&&bki<35){
		cout<<"3.Derece Obez."<<endl;
	}
	else{
		cout<<"3.Derece Morbid Obez."<<endl;
	}
	
	
}
