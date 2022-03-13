#include<iostream>//sýralama algoritmasý 
using namespace std;
int main(){

	int a[]={5,6,45,12,3,2,1},temp;
	for(int i=0;i<7;i++){
		for(int j=i+1;j<7;j++){
			if(a[i]>a[j]){
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
		cout<<a[i]<<" ";
	}
}
