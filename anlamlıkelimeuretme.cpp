#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
int sesli(char );

int main(){
	char a[10],c[10];
	int i=0;
	srand(time(NULL));
	for(int j=0;j<400;j++){
		for(i=0;i<3;i++){
			a[i]=rand()%26+97;
			
		if(sesli(a[i]) && i%2!=0){//tek ve sesli 
			cout<<a[i];
		}else if(sesli(a[i])==0 && i%2==0 && a[i-2]!=a[i] && a[i]!='j' && a[i]!='q' && a[i]!='w' && a[i]!='x'){//cift ve sessiz
			cout<<a[i];
		}else{
			i--;
			continue;
			}
		}
		cout<<endl;
	}
}

int sesli(char a){
	
	if(a=='a'||a=='e'||a=='i'||a=='u'||a=='o'){
		return 1;
	}
	else{
		return 0;
	}
}
