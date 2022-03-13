#include<stdio.h>//x=v*t t=x/v

int main(){
	int v,x;
	float t;
	printf("yol arasi mesafeyi km cinsinden giriniz:");
	scanf("%d",&x);
	printf("yol boyunca ortalama hizinizi giriniz:");
	scanf("%d",&v);
	t=x/v;
	printf("yaklasik %.2f saatte hedefe ulasacaksiniz..",t);
	return 0;
}
