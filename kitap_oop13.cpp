#include <iostream>
using namespace std;

class Kamyon;

class Araba{
	int kisi_sayisi, hiz;
	
	public:
		Araba(int y, int h){
			kisi_sayisi = y;
			hiz = h;
		}
	int arkadaslik(Kamyon k);
};

class Kamyon{
	int tonaj, hiz;
	public:
		Kamyon(int a, int h){
			tonaj = a;
			hiz = h;
		}
	friend int Araba::arkadaslik(Kamyon k); 
};

int Araba::arkadaslik(Kamyon k){
	return hiz-k.hiz;
}

int main()
{
	int m;
	Araba araba1(2,225);
	Araba araba2(4,85);
	
	Kamyon kamyon3(30000, 75);
	Kamyon kamyon4(32000, 85);
	
	cout << "araba1 ve kamyon3\n";
	m = araba1.arkadaslik(kamyon3);
	
	if(m<0){
		cout << "kamyon daha hizli";
	}else if(m==0){
		cout << "kamyon ile arabanin hizlari esit.\n";
	} else{
		cout << "araba daha hizli.\n";
	}
	
	cout << "\n araba2 ve kamyon4 : \n";
	m = araba2.arkadaslik(kamyon4);
	
	if(m<0){
		cout << "kamyon daha hizli";
	}else if(m==0){
		cout << "kamyon ile arabanin hizlari birbirine esit.\n";
	} else{
		cout << "araba daha hizli.\n";
	}
	system("pause");
	return 0;
}
