#include<stdio.h>

int main(){
	int x,i;
	float ort,top=0;
	
	for(i=0;;i++){
		printf("bir sayi giriniz.(cikmak icin -1 e basin.");
			scanf("%d",&x);
					if(x!=-1){
				top=top+x;	}
				else {
	ort=top/(i);
	printf("sayilarin aritmetik ortalamasi %.1f dir.",ort);
	break;
}}
	return 0;
}
