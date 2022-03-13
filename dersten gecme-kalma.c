#include <stdio.h>

int main(){
	label;
	int x;
	printf("notunuzu girin:");
	scanf("%d",&x);
	
	if (x>=60 && x<=100){ 
	printf("dersten gectiniz.");
}
	else if(x<60 ){
	printf("derten kaldiniz.");
}
	
	  else {
		
		printf("hatali giris.");
}

	goto label;
	return 0;
}
