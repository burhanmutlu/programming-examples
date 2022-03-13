#include<iostream>//armstrong----->xyz=x^3+y^3+z^3
#include<math.h>
using namespace std;
int main(){
	int x=0,y=0,z,sm;
	for(int i=0;i<1000;i++){
		z=0;
		sm=0;
		if(i>99){
			y=i/100;
			z=i%100;
			x=i%10;
			z=(z-x)/10;
		}
		sm=pow(x,3)+pow(y,3)+pow(z,3);
		if(i==sm)	 cout<<"aranan sayi= "<<i<<endl;
		
	}
	
}
