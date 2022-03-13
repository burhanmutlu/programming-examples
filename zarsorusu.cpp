#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

void show(int a[],int y){
	for(int j=0;j<6;j++){
		cout<<j+1<<"="<<(float)a[j]/y<<" ";
	}
	cout<<endl;
}

int main(){
	label:
	int n;
	cout<<"lutfen atis sayisini giriniz:"<<endl;
	cin>>n;
	srand(time(NULL));
	int atis[]={0,0,0,0,0,0};
	for(int i=0;i<n;i++){
		int x=rand()%6+1;
		if(x==1) 	atis[0]++;
		else if(x==2) 	atis[1]++;
			else if(x==3) 	atis[2]++;
				else if(x==4) 	atis[3]++;
					else if(x==5) 	atis[4]++;
						else if(x==6) 	atis[5]++;
	}
	show(atis,n);
	goto label;
	
	
}
