#include<iostream>
using namespace std;
int main(){
	
	int min,max;
	bool asal;
	cout<<"iki sayi giriniz:";
	cin>>min>>max;
	if(min>max){
		int temp=min;
		min=max;
		max=temp;
	}
	cout<<min<<" ve "<<max<<" sayilari arasindaki asal sayilar:"<<endl;
	while(min<max){
		asal=true;
		if(min==0||min==1){
			asal=false;
		}
		else{
			for(int i=2;i<min/2;i++){
				if(min%i==0){//asal deðil 
					asal=false;
					break;
				}
			}
		}
		if(asal) //true ise
			cout<<min<<" ";
			
		min++;
	}
	
	
}
