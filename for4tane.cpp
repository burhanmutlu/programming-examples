#include<stdio.h>

int main(){
		int i,j,s,n;
		for(i=0;i<3;i++){//satýr
			for(j=0;j<2;j++){//sutün
					for(s=0;s<2;s++){
						for(n=0;n<3;n++){
							printf("*");
						}
					}
			}
			printf("\n");
		}

	return 0;
}
