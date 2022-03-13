#include <stdio.h>
#include <math.h>
#define pi 3.14159265

int main() { 

	double derece,sonucsin,sonuccos,aci;
	printf("Aciyi Giriniz: ");
	scanf("%lf",&aci);
	derece=aci*pi/180;   
	
	sonucsin=sin(derece);
	printf("Sinus: %lf\n",sonucsin);
	
	sonuccos=cos(derece);
	printf("Cosinus: %lf",sonuccos); 


	return 0;
}
