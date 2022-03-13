#include<stdio.h>

int main(){
	
	int a,b,c;
	printf("uc sayi giriniz:");
	scanf("%d %d %d",&a,&b,&c);
	if(a<b&&a>c || a>b&&a<c){ printf("a,b ve c arasindadir.");}
	else {
	printf("a,b ve c arasinda degildir.\n");}
	if(a==b && a<c){ printf("a,b ye esit ve c den kucuk.");}
    else{
    printf("a,b ye esit ve c den kucuk degil.\n");}
    if(a>b ||a>c){ printf("a,b den veya c den buyuk.");}
    else {
    printf("a,b den veya c den buyuk degil.\n");}
     return 0;
	 }
