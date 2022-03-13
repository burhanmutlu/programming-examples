#include<stdio.h>

int main(){
	int a,g,y,yb,gb,ab;
	float yas;
	printf("dogum yilinizi giriniz:");
	scanf("%d",&y);
	printf("dogum ayinizi giriniz:");
	scanf("%d",&a);
	printf("dogum gununuzu giriniz:");
	scanf("%d",&g);
	printf("bugunun yilini giriniz:");
	scanf("%d",&yb);
	printf("bugunun ayini giriniz:");
	scanf("%d",&ab);
	printf("bugunun gununu giriniz:");
	scanf("%d",&gb);
	yas=((yb-y)*365 + (ab-a)*30+gb-g)/365.0;
	printf("yasiniz %.2f:",yas);

	return 0;
}
