#include<iostream>
using namespace std;
int main(){
	
	cout<<"\n";
	for(int i=0;i<11;i++){
		cout<<"	";
		for(int j=0;j<11;j++){
			if((i==5&&j!=0&&j!=10)||j==5){
				if(i!=5){
					cout<<"          ";
				}
				cout<<char(197);
				if(j!=5||i==5){
					cout<<char(196);
				}
			}
			else if((i==5&&j==0)){
				cout<<"<"<<char(196);
			}
				else if((i==5&&j==10)){
				cout<<">";
			}
		}
		cout<<endl;
	}
}
