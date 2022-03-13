#include<iostream>
using namespace std;
int main(){
	
	int a=5,*ap;
	float b=3.2,*bp;
	double c=3.412,*cp;
	char d='a',*dp;
	int sayilar[5]={1,2,3,4,5};
	int *arrayp;
	ap=&a;		bp=&b;		cp=&c;		dp=&d;
	arrayp=&sayilar[4];
	printf("%u adresindeki intin degeri %d dir\n",ap,*ap);
	printf("%u adresindeki floatin degeri %f dir\n",bp,*bp);
	printf("%u adresindeki doublenin degeri %lf dir\n",cp,*cp);
	printf("%u adresindeki charin degeri %c dir\n",dp,*dp);
	printf("%u adresindeki sayilarin eleman degeri %d dir\n",arrayp,*arrayp);
	
}
