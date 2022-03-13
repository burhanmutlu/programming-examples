#include<iostream>
#include<string.h>
using namespace std;
int main(){
	
	char veri[25]="burhan";
	int uzunluk=strlen(veri);
	
	FILE *filep=fopen("yazilim.txt","w");
	if(filep==NULL)		cout<<"dosya olusturulamadi."<<endl;
	else{
		for(int i=0;i<uzunluk;i++){
			fputc(veri[i],filep);
			cout<<"yazilan karakter: "<<veri[i]<<endl;
		}
		
		cout<<"dosya olusturuldu"<<endl;
		fclose(filep);
		}
}
