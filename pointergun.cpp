#include<stdio.h>
char *gunismi(char gundizisi[7],int hangigun){
	if(hangigun>=1&&hangigun<=7){
		return gundizisi[hangigun-1];
	}
	else{
		return NULL;
	}
}
int main(){
	char *gunler[7]={"pzt","sali","car","per","cuma","cmt","pzr"};
	char *p=gunismi(gunler,2);
	if(p==NULL){
		printf("NULL");
	}
	else{
		printf("%s",p);
	}	
	return 0;
}
