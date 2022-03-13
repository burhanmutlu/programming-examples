#include<iostream>//örnek\  a=6 b=2 	---->2 4 6 =12
using namespace std ;
int main(){
	
	int a,b,tp=0;
	cin>>a>>b;
	for(int i=0;i<=a;i++){
		if(i%b==0) tp+=i;
	}
	
	cout<<tp<<endl;
	
}
