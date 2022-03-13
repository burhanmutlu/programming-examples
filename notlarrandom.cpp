#include<iostream>
#include<cmath>
#include<ctime>
#include<stdlib.h>
using namespace std;

void show(int a[],int size){
	for(int i=0;i<size;i++){
		cout<<a[i]<<endl;
	}
}

float mean(int a[],int size){
	float k=0;
	for(int i=0;i<size;i++){
		k=k+a[i];
	}
	return k/size;
}

float stand(int a[],int size){
	float x=0;
	for(int i=0;i<size;i++){
		x=x+pow(a[i]-mean(a,size),2);
	}
	return pow(x,1/2.0)/size;//standart sapma
}
int main(){
	
	label:
		int n;
		cin>>n;
		srand(time(NULL));
		int notlar[n];
		for(int i=0;i<n;i++){
			notlar[i]=rand()%100+1;//101 olsa 101 girildiðinde 0 cýkar
		}
		cout<<"ortalama: "<<mean(notlar,n)<<" standart sapmasi: "<<stand(notlar,n)<<endl;
	show(notlar,n);
		goto label;
}
