#include<stdio.h>
#include<string.h>
int main(){
	char a[20]="burhan",b[10];//karakter dizileri eþitlenemez.
	strcpy(b,a);//önce kopyalanacak dizi yazýlýr.
	printf("%s",b);
	return 0;
}
//c++ da stringler eþitlenebilir.

