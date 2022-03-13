#include<iostream>
using namespace std;
int main(){
	
	char a;
	cout<<"harf girin:";
	cin>>a;
	if(a==65||a==66||a==67){
		cout<<a<<" harfi telefonda 2 rakamina karsilik gelir."<<endl;
	}else if(a==68||a==69||a==70){
		cout<<a<<" harfi telefonda 3 rakamina karsilik gelir."<<endl;
	}else if(a==71||a==72||a==73){
		cout<<a<<" harfi telefonda 4 rakamina karsilik gelir."<<endl;
	}else if(a==74||a==75||a==76){
		cout<<a<<" harfi telefonda 5 rakamina karsilik gelir."<<endl;
	}else if(a==77||a==78||a==79){
		cout<<a<<" harfi telefonda 6 rakamina karsilik gelir."<<endl;
	}else if(a==80||a==81||a==82){
		cout<<a<<" harfi telefonda 7 rakamina karsilik gelir."<<endl;
	}else if(a==83||a==84||a==85||a==86){
		cout<<a<<" harfi telefonda 8 rakamina karsilik gelir."<<endl;
	}else if(a==89||a==87||a==88){
		cout<<a<<" harfi telefonda 9 rakamina karsilik gelir."<<endl;
	}else{
		cout<<"oyle bir harf yoktur";
	}
}
