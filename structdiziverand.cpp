#include<iostream>
#include<stdlib.h>
#include<ctime>
#include<fstream>
using namespace std;
struct araba{
	int yil;
	char model,tur;
}obj[30];

void show(araba obj[30]){
	for(int i=1;i<31;i++){
		cout<<obj[i].model<<" "<<obj[i].tur<<" "<<obj[i].yil<<endl;
	}
}
int main(){
	srand(time(NULL));
	ofstream burhan;
	burhan.open("bst.txt");
		int j=1;
	for(int i=0;i<300;i++){
		int x=rand()%90;
		int yil1=rand()%200;
		if(x>65){
			obj[j].yil=yil1;
			obj[j].tur=char(x);
			obj[j].model=char(x);
			burhan<<yil1<<"	"<<char(x)<<"	"<<char(x)<<endl;
			++j;
			if(j>30)	break;
			
		}
	
	}
		show(obj);
	burhan.close();
}
