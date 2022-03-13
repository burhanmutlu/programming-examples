#include<stdio.h>//t*y/2

float ucgenalan(int taban,int yukseklik){
	
	float alan=taban*yukseklik/2;
	printf("%f ",alan);
	return alan;
}
int main(){
	int a,b;
	printf("taban ve yukseklik girin:");
	scanf("%d %d",&a,&b);
	ucgenalan(a,b);
	
	return 0;
}
