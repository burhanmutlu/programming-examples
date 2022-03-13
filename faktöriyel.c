#include<stdio.h>


int main(){
	int f;
	int fact=1;
	printf("faktoriyel sayisini giriniz:");
	scanf("%d",&f);
	
	while (f>0){
    printf("%d\n",f);
    fact=fact*f;
    f--;
}
printf("%d",fact);

	return 0;
}
