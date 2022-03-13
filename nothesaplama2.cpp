#include<stdio.h>

float ortalama(int sozlu1,int sozlu2,int sinav1,int sinav2){
	
	int soz=sozlu1+sozlu2;
	float ort=((sinav1+sinav2+soz)/3)-50;
	printf("sinav ortalamaniz %f: ",ort);
	return ort;
}

int main(){
	
	float a,b,c,d;
	printf("birinci sozlu notunuzu girin:\n");
	scanf("%f",&a);
	printf("ikinci sozlu notunuzu girin:\n");
	scanf("%f",&b);
	printf("birinci sinav notunuzu girin:\n");
	scanf("%f",&c);
	printf("ikinci sinav notunuzu girin:\n");
	scanf("%f",&d);
	ortalama(a,b,c,d);
	
	return 0;
}
