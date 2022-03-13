#include<stdio.h>
#include<string.h>

int main(){

	int sifre,i;
	char isim['9'];
	for(i=0;i<3;i++){
	printf("kullanici adinizi giriniz:");
	scanf("%s",isim);
	printf("sifrenizi giriniz:");
	scanf("%d",&sifre);
    if(strcmp(isim,"burhanmutlu")==0 && sifre==123456){printf("sisteme hos geldiniz."); break;}
	else {if(i!=2){printf("kullanici adi ve/veya sifre yanlis\n\n");  }}
	if(i==2){printf("hesabiniz kilitlenmistir.");}}
	return 0;
}

