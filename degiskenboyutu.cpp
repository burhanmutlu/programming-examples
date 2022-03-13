#include<iostream>//deðiþken boyutlarý
#include<stdio.h>
using namespace std;
int main(){
	
	
	cout<<"tam sayi boyutu: "<<sizeof(int)<<endl;
	cout<<"kisa tam sayi boyutu: "<<sizeof(short int)<<endl;
	cout<<"uzun tam sayi boyutu: "<<sizeof(long int)<<endl;
	cout<<"kesirli sayi boyutu: "<<sizeof(float)<<endl;
	cout<<"uzun kesirli sayi boyutu: "<<sizeof(double)<<endl;
	cout<<"karakter boyutu: "<<sizeof(char)<<endl;
	cout<<"karakter dizisi boyutu: "<<sizeof(string)<<endl;
	printf(“%d\n”,sizeof(int*));

}
