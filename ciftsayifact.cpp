#include<iostream>//cift sayilarin faktoriyeli 6 4 2
using namespace std;
int fact(int a){
	int tp=1;
	for(int i=1;i<=a;i++){
		if(i%2==1)    continue;
		else	tp*=i;		
	}
		cout<<tp;
}
int main(){
	
	int a;
	cin>>a;
	fact(a);
}
