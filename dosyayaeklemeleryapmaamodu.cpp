#include<iostream>
using namespace std;
int main(){
	FILE *filep;
	char text[256];
	filep=fopen("yazilim.txt","a");
	if(filep==NULL)	cout<<"dosya olusmadi";
	else{
		cout<<"bir sey yazin";
		fgets(text,256,stdin);
		fputs(text,filep);
		cout<<"dosya yazildi";
		fclose(filep);
	}
}
