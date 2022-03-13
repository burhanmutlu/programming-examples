#include<stdio.h>//a*a+b*b=c*c

int main(){
	int x,y,z;
	printf("uc sayi giriniz:");
	scanf("%d %d %d",&x,&y,&z);
	
	if(((x*x)+(y*y)==(z*z)) || ((x*x)+(z*z)==(y*y)) || ((z*z)+(y*y)==(x*x))){
		printf("bu bir dik ucgendir.");}
		
		else {
		
		for(;;){
			printf("tekrar deneyiniz..");
			scanf("%d %d %d",&x,&y,&z);
		if(((x*x)+(y*y)==(z*z)) || ((x*x)+(z*z)==(y*y)) || ((z*z)+(y*y)==(x*x))){
			printf("bu bir dik ucgendir.");
			break;}
			else{
			continue;}
	}}
	return 0;
}
