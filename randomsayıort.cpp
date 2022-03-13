#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
		
	int a,i,top=0;
	float ort;
	srand(time(NULL));
	
	for(i=0;i<6;i++){
	a=rand()%100+1;
	top+=a;}
	
	ort=top/6.0;
	printf("%.1f",ort);
}
