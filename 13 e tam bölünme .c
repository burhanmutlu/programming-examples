#include<stdio.h>//100'den 0'a kadar 13'e tam bölünebilen sayýlarý ekrana yazdýrýnýz (büyükten küçüðe).

int main(){
	int i;
	for(i=100;i>0;i--){
		if(i%13==0) {
			printf("%d\n",i);
		}
		else {
			continue;
		}
	}
	printf("bu sayilar 13 e kalansiz bolunur.");
	return 0;
}
