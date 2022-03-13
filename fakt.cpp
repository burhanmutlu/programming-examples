#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <time.h>
using namespace std;

int main()
{
	srand(time(NULL));
	ofstream dosya;
	dosya.open("mesaj.txt");
	int ct=0,sonuc;
	while(ct<10){
		sonuc = 1;
	int fakt;
	fakt = rand()%10+1;
	while(fakt > 0){
		sonuc *= fakt;
		fakt--;
	}
	dosya << "faktoriyel: " << sonuc << endl;
	ct++;
	}
	dosya.close();
	
}
