#include<iostream>//bubble sort
using namespace std;
int main(){
	
	string a[5];
	cout<<"5 kelime giriniz:"<<endl;
	for(int i=0;i<5;i++){
		getline(cin,a[i]);
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<4-i;j++){
			if(a[j]>a[j+1]){// j+1 sayesinde 5 yerine 4'e kadar döndü.
				string temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(int i=0;i<5;i++){
		cout<<a[i]<<endl;
	}	
}
