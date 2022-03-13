#include<iostream>
using namespace std;
int main(){
	
	int satir,coef=1;
	cout<<"satir sayisini giriniz:"<<endl;
	cin>>satir;
	for(int i=0;i<satir;i++){
		for(int space=1;space<=satir-i;space++){
			cout<<" ";
		}
		for(int j=0;j<=i;j++){
			if(j==0||i==0){
				coef=1;
			}
			else{
				coef=coef*(i-j+1)/j;
			}
			cout<<coef<<" ";
		}
		cout<<endl;
	}
	
}
