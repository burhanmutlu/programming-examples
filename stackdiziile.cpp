#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
int *dizi;
int boyut = 2;
int tepe = 0;

void bastir()
{
	cout << "dizi: ";
	for(int i=0; i<tepe; i++){
		printf("%d ", dizi[i]);
	}
}

int pop()
{
	if(tepe<=boyut/4){
		int * dizi2 = (int *)malloc(sizeof(int)*boyut/2);
		for(int i=0; i<boyut; i++){
			dizi2[i] = dizi[i];
		}
		free(dizi);
		dizi = dizi2;
		boyut = boyut / 2;
	}
	cout << "diziden cikarma yapildi." << endl;
	bastir();
	cout << "boyut: " << boyut << endl;
	return dizi[--tepe]; // bu iþlem ramdan silmez ama stack mantýðý çalýþýr
}

void push(int a)
{
	if(tepe>=boyut){
		int * dizi2 = (int *)malloc(sizeof(int)*boyut*2);
		for(int i=0; i<boyut; i++){
			dizi2[i] = dizi[i];
		}
		free(dizi);
		dizi = dizi2;
		boyut *= 2;
	}
	dizi[tepe++] = a;
	cout << "diziye ekleme yapildi." << endl;
	bastir();
	cout << "boyut: " << boyut << endl;
}

int main()
{
	dizi = (int *)malloc(sizeof(int)*2);
	
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	push(60);
	push(70);
	push(80);
	push(90);
	bastir();
	pop();
	pop();
	pop();
	pop();
	pop();
	

	/*printf("\npopped %d\n",pop());
	printf("popped %d\n",pop());*/
	
/*	cout << "\n"<<*(dizi+0)<< endl;
	cout << *(dizi+1)<< endl;
	cout << *(dizi+2)<< endl;
	cout << *(dizi+3)<< endl;
	cout << *(dizi+4)<< endl;*/	
//	cout << "\nboyut: " << boyut << endl;
}
