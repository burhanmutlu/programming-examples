#include <iostream>
#include "insan.h"
#include "calisan.h"

using namespace std;

int main()
{
	
	insan burhan("burhan", "mutlu", "12345678901", "adana", 20, 2001, 53);
	insan neslihan;
	Calisan kamil;
	
	kamil.setMaas(1800);
	kamil.setKilo(54); 
	kamil.YemekYe(7400); // 1 kg alması gerekirken 2 kilo aldı
	
	cout << kamil.getKilo() << endl;
	
	neslihan.setAd("neslihan");
	neslihan.setSoyad("dogan");
	neslihan.setTc("00000000000");
	neslihan.setMemleket("kahramanmaras");
	neslihan.setYas(19);
	neslihan.setDogumYili(2002);
	neslihan.setKilo(41);
	
	burhan.YemekYe(7400);
	burhan.YuruyusYap(100);
	
	cout << "tc: " << burhan.getTc() << endl;
	cout << "ad: " << burhan.getAd() << endl;
	cout << "soyad: " << burhan.getSoyad() << endl;
	cout << "yas: " << burhan.getYas() << endl;
	cout << "dogum yili: " << burhan.getDogumYili() << endl;
	cout << "kilo: " << burhan.getKilo() << endl;
	cout << "memleket: " << burhan.getMemleket() << endl;
	
	cout << "--------------------------------------------" << endl;
	
	cout << "tc: " << neslihan.getTc() << endl;
	cout << "ad: " << neslihan.getAd() << endl;
	cout << "soyad: " << neslihan.getSoyad() << endl;
	cout << "yas: " << neslihan.getYas() << endl;
	cout << "dogum yili: " << neslihan.getDogumYili() << endl;
	cout << "kilo: " << neslihan.getKilo() << endl;
	cout << "memleket: " << neslihan.getMemleket() << endl;
	
	return 0;
}
