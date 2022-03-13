#include<iostream>
#define max 50
using namespace std;
void insertionsort(int arr[],int size){
	int i,j,buyuk,tp=0;
	for(i=1;i<size;i++){//1 den baþlamasýnýn sebebi 0 la karsýlastýrma
		buyuk=arr[i];
		j=i-1;
		while(j>=0&&arr[j]>buyuk){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=buyuk;
	}
}
int main(){
	
	int array[max],size,i;
	cout<<"kac elemanli:"<<endl;
	cin>>size;
	for(i=0;i<size;i++){
		cin>>array[i];
	}
	insertionsort(array,size);
	for(i=0;i<size;i++){
		cout<<array[i]<<" ";
	}	
}
