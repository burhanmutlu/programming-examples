#include<stdio.h>

int main(){
	
	int a,b,c,eb=0;
	printf("uc sayi giriniz:");
	scanf("%d %d %d",&a,&b,&c);
		if(a>b && a>c) {printf("en buyuk sayi:%d",a);}
		else if(b>c &&b>a) {printf("en buyuk sayi:%d",b);}
		else if(c>a &&c>b) {printf("en buyuk sayi:%d",c);}
		else if(a==b&&b==c) {printf("hepsi esit");}

     return 0;
	 }
