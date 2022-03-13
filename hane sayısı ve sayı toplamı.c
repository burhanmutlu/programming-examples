#include<stdio.h>

int main(){
	
	int x,hane=0,toplam=0;
	printf("sayiyi giriniz:");
	scanf("%d",&x);
	
	do {
		toplam +=(x%10);
		hane++;
		x=x/10;
	}
	while(x>0);
	printf("rakamlari toplami %d \n %d haneli",toplam,hane);
	
	return 0;
}
