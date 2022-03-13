#include<stdio.h>//Bir iþçi bir iþi 10 günde yapabilmektedir. Buna göre 2 iþçi ayný iþi kaç günde yapar?

int main(){
	int is,isci;
	printf("bir isci bu isi kac gunde yapar: ");
	scanf("%d",&is);
	printf("kac isci yapacak: ");
	scanf("%d",&isci);
	is=is/isci;
	printf("%d gunde biter.",is);
	
	return 0;
}
