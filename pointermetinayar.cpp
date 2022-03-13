#include<stdio.h>
#include<string.h>
char *dondur(char *p,int indeks){
	int uzunluk=strlen(p);
	if(indeks>uzunluk){
		return NULL;
	}
	else{
		printf("%d\n",p+indeks);
			printf("%d\n",p);
		return p+indeks;
		
	}
}
int main(){
	
	char dizi[]="yazilim";
	char *p=dondur(dizi,6);
	if(p==NULL){
		printf("pointer NULL");
	}
	else{
		printf("%s",p);
	}
	return 0;
}
