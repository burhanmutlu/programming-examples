#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(int argc, char *argv[]) {
	FILE *fp;
	int c = 0, say[25] = {0},stx,i=0,j;
	char metin[2000],*str[2000];
	for(i=0;i<26;i++)
	    say[i]=0;
	char dosyaAdi[25];
	printf("\n\n\n\n\n\n\n\t\t\t\t\tDosya ismini giriniz:");
	scanf("%s",&dosyaAdi);
	system("cls");
	if(fp!=NULL){//dosya var olup olmadýgýný kontrol eder
        fp=fopen(dosyaAdi,"r");
	    while(!feof(fp)){
		    metin[c]=fgetc(fp);
		    while (metin[c] != '\0'){//harfleri kontrol eder ve sayilarýný yazdýrýr.
                if (metin[c] >= 'a' && metin[c] <= 'z'){
      	            say[metin[c]-'a']++;
	           }
               c++;
            }	
	   }
	}
	else{
	    printf("Dosya adi hatalý:");
	}
	printf("Harf sayilari");
	printf("\n\t\tSiralama:\n");
	for(i=0;i<26;i++){
		metin[i]=i+'a';
	}
	for(i=0;i<26;i++){//hangi harfeten kaç tane oldunu yazýyor
		if (say[i] != 0)
		    printf("%c=%d\n",metin[i],say[i]);
	   }
	return 0;
}
