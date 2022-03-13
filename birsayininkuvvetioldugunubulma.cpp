#include<iostream>
#include<cmath>
using namespace std;
int main(){
	
	int sayi,taban,c=1;
	cout<<"bir sayi ve taban giriniz: ";
	cin>>sayi>>taban;
	while(sayi>pow(taban,c))	c++;
	
	for(int i=1;i<c+1;i++){
		if(sayi==pow(taban,i)){
			cout<<taban<<"'in "<<i<<". kuvvetidir."<<endl;
			break;
		}
		else{
			if(i==c){
				cout<<taban<<"'in "<<"kuvveti degildir."<<endl;
			}
			continue;
		}
	}
}
