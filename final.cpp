#include<iostream>
using namespace std;
int main(){
 	int k,tp=0,ilki=0;
		for(int i=100;i<1000;i++){
			ilki=i;
			k=i%10;
			i=i/10;
			if(k==0){
					i=ilki;
				continue;
			}
			else{
			i=i/10;
			if(i==k){
				i=ilki;
				tp++;
			}
			else {
				i=ilki;
					continue;		
			}
		}
	}
			cout<<tp;
	
}
