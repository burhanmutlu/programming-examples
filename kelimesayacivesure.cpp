#include<stdio.h>
#include<ctime>
#include<conio.h>
#include<iostream>
int main(){
	
	time_t start,end;
	time(&start);
	int sayi=1;
	while(true){
		int a = getch(); //karakter okur. ascii code
		printf("%c",a);
		if(a==32) // space 
		sayi+=1;
		else if(a==13){ // enter
			time(&end);
			std::cout<<"\n"<<&end<<"\n";
			printf("\nsure: %.1f",difftime(end,start));
			printf("\n%d",sayi);
			break;
		}
	}
}
