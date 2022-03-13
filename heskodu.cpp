#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
int main(){
	srand(time(0));
	char a;
	for(int i=0;i<12;i++){
		if(i==4||i==9){
			cout<<"-";
		}else if(i==0||i==2){
			a=rand()%26+65;
			cout<<a;
		}else{
			cout<<rand()%9+1;
		}
	}
}
