#include <iostream>
#include <stdlib.h>
#include <ctime>
#define degisken 5
// degiskenlerin ilk degerini atamak önemlidir.
// fonksiyonlarda adres olmadan deger degistirilmez.
using namespace std;
struct sayilar
{
	int tek;
	int cift;
	int tek_sayisi;
	int cift_sayisi;
	float cift_ort;
	float tek_ort;
};
struct sayilar deger_ata()
{	
	struct sayilar sayi;
	// ilkleme
	sayi.cift =0;
	sayi.tek =0;
	sayi.cift_ort =0;
	sayi.tek_ort =0;
	sayi.cift_sayisi=0;
	sayi.tek_sayisi=0;
	// deger atama
	for(int i=0; i<degisken; i++){
		int deger=rand()%10;
		cout << deger << " ";
		if(deger%2==0){
			sayi.cift += deger;
			++sayi.cift_sayisi;
		}else{
			sayi.tek += deger;
			++sayi.tek_sayisi;
		}
	}
	// tür dönüşümü
	sayi.cift_ort = sayi.cift / (float)sayi.cift_sayisi;
	sayi.tek_ort = sayi.tek / (float)sayi.tek_sayisi;
	return sayi;
}

int main()
{
	srand(time(NULL));
	// pointer kullansam sayilar(rand_sayilar) seklinde yapardım
	sayilar rand_sayilar = deger_ata();
	cout << endl << "cift sayilarin ortalamasi: " << 
										rand_sayilar.cift_ort << endl;
	cout << "tek sayilarin ortalamasi: " <<
										rand_sayilar.tek_ort << endl;
	
}
