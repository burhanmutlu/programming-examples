#include<iostream>
#include<vector>
using namespace std;

void show(int x[10]){
	for(int i=0;i<10;i++){
		cout<<x[i]<<endl;
	}
}
void show(vector<int>x){
	for(int i=0;i<x.size();i++){
		cout<<x[i]<<endl;
	}
}

int main(){
	
	int a[10],ct=0;
	vector<int>b;
	for(int i=0;i<10;i++){
		if(i%2==0){
			a[ct]=i;
			ct++;
			b.push_back(i);
		}
	}
	cout<<"statik"<<endl;
	show(a);
	cout<<"vektor"<<endl;
	show(b);	
}
