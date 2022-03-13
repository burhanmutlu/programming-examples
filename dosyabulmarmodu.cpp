#include<iostream>
using namespace std;
int main(){
	FILE *filep=fopen("yazilim.txt","r");
	if(filep==NULL)	cout<<"dosya yok"<<endl;
	else	cout<<"dosya var"<<endl;
}
