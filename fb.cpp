#include<iostream>
using namespace std;
int main(){
	
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			if(i==0||j==0||i==4){
				cout<<"*";	
			}
		}
				cout<<endl;
	}
	cout<<endl;
		for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			if(j==0||i==5||i==9||i==0){
				cout<<"*";	
			
				}
					if(j==9&&i!=5&&i!=0&&i!=9){
					cout<<"        "<<"*";
			}
		}
				cout<<endl;
	}
	
	
}
