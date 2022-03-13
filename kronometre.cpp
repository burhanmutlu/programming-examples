#include <iostream>
#include <unistd.h> // sleep fonkiyonu için
#include <conio.h> // getch için
#include <time.h> // zaman fonksiyonu
using namespace std;
int main() {
	
	time_t baslangic, bitis;
	
	cout << "baslamak icin bir tusa bas:" << endl;
	getch();	 // bir karakter alýr
	
	time(&baslangic);	 // o anýn süresini alýr
	
//	sleep(2); 		// 2 saniye bekler

	cout << "durdurmak icin bir tusa bas:" << endl;
	getch();
	
	time(&bitis); 	// son anýn süresini alýr
	
	cout << "gecen sure: " << difftime(bitis,baslangic) / 60; 
	
	//zaman saniye cinsindendir bunu dakika, saat olarak ayarlayabiliriz.
	// aradaki zaman farkýný hesaplar 
	return 0;
}
