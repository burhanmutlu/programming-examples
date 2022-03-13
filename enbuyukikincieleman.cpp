#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
int max_2(int dizi[20])
{
	int max = dizi[0];
	for(int i=1; i<10; i++){
		if(dizi[i]>max){
			max = dizi[i];
		}
	}
	int min = dizi[0];
	for(int i=1; i<10; i++){
		if(dizi[i]<min){
			min = dizi[i];
		}
	}
	int max2 = min;
	for(int i=0; i<10; i++){
		if(dizi[i]>max2 && max>dizi[i]){
			max2 = dizi[i];
		}
	}
	return max2;
}
void bastir(int a[20])
{
	for(int i=0; i<10; i++){
		cout << a[i] << " ";
	}
}
int main()
{
	srand(time(NULL));
	int a[20];
	for(int i=0; i<10; i++){
		a[i] = rand()%100;
	}
	bastir(a);
	cout << endl << "dizinin en buyuk 2. elemani: " << max_2(a);
	
}
