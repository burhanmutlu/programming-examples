#include<stdio.h>
#include<conio.h>
int main(){
	
	int i,j;
	
	for(i=0; i<10;i++){
		
		for(j=0; j<10; j++){
			printf("%d * %d ",i,j);
			printf("%d ",i*j);
		printf("  ");
		}	printf("\n");}
	getch();
	return 0;

}
