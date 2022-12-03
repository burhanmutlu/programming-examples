#include <iostream>
#include <string>

using namespace std;

class Insanlar
{
	string ad, soyad;
	int yas;
	
	public:
		Insanlar(string ad, string  soyad, int yas){
			this->ad = ad;
			this->soyad = soyad;
			this->yas = yas;
		}
		
		void Goster(){
			cout << "ad " << ad << endl;
			cout << "soyad " << soyad << endl;
			cout << "yas " << yas << endl;
			cout << "------------\n" << endl;
		}
};

int main()
{
	Insanlar insan1("ozlem", "zor", 12);
	Insanlar insan2("burhan", "mutlu", 19);
	
	insan1.Goster();
	insan2.Goster();
}
