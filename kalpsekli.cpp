#include <conio.h>
#include <iostream>
#include <windows.h>
using namespace std;
int main(){
fflush(stdin);
system("color 1E");
int d=9;
for(int i=1;i<=22;i++){
    for(int j=1;j<=60;j++){
	if(i==1) if(((j>=14)&&(j<=23))||((j>=39)&&(j<=48))) cout<<"*"; else cout<<" ";
    else if(i==2) if(((j>=11)&&(j<=26))||((j>=36)&&(j<=51))) cout<<"*"; else cout<<" ";
    else if(i==3) if(((j>=9)&&(j<=28))||((j>=34)&&(j<=53))) cout<<"*"; else cout<<" ";
    else if(i==4) if(((j>=7)&&(j<=30))||((j>=32)&&(j<=55))) cout<<"*"; else cout<<" ";
    else if((i>=5)&&(i<=8)) if((j>=5)&&(j<=57)) cout<<"*"; else cout<<" ";
	else if(i==d&&i!=21){
		if((j>=2*d-11)&&(j<=2*d+37-(i-9)*4)){//18+37 - 20+33 - 22+29
			cout<<"*";
		}else{
			cout<<" ";
			if(j==60){
				d++;
			}
				}	}
				else if(i==21) if((j>=30)&&(j<=32)) cout<<"*"; else cout<<" ";
			else if(i==22) if(j==31) cout<<"*"; else cout<<" ";
			   }
	cout<<"\n";
}}
