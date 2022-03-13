#include<iostream>
using namespace std;
int main(){
	
	int a[]={3,5,1,4,2},temp;
	for(int i=0;i<5;i++){
		for(int j=1;j<5-i;j++){//en buyuk ilk dongünün sonunda sona gider.
			if(a[j-1]>a[j]){
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
	}
	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
}
