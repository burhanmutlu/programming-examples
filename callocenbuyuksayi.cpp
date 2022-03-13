#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int main(){

	int num;
	float *data;
	cout<<"eleman sayisini giriniz:";
	cin>>num;
	data = (float *)calloc(num,sizeof(float));
	if(data==NULL){
		cout<<"hata, ram de erisilemedi.";
		exit(0);
   	}
		for(int i=0;i<num;i++){
		cout<<i+1<<". sayiyi giriniz: ";
		scanf("%f",data+i);	//cin ile alamadým 	
	                       		}
	for(int i=1;i<num;i++){
		if(*data<*(data+i))
		*data = *(data+i);
	  	}
	  	
	  cout<<"en buyuk sayi: "<<*data;	
}
