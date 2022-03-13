#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;


int chk(int a[]){
	int k=0;
	for(int i=0;i<5;i++){
		for(int j=i+1;j<5;j++){
			if(a[i]==a[j]){
				k++;
			}
		}
	}
	return k;
}

void show(int a[]){
	for(int i=0;i<5;i++){
		cout<<i<<" "<<a[i]<<endl;
	}
}

int main(){

	
	srand(time(NULL));
	string l;
	getline(cin,l);
	
	while(true){
		int a[l.size()],ct=0;
		while(ct<l.size()){
			a[ct]=rand()%l.size()+1;
			ct++;
		}
		if(chk(a)==0){
			//show(a);
			for(int i=0;i<l.size();i++){
				cout<<l[a[i]-1];
			}
			break;
		}
	}
}
