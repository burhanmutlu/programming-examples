#include <iostream>
#define Sifre 100

using namespace std;
class password{
	private:
		int sifre = 987;
		int kirilan_sifre;
	public:
		const int karakter_Sayisi = 5;
		void deger_Degistir(int a){
			sifre = a;
		}
		int sifreKir();
		void sifreBas();
};

int password::sifreKir()
{
	for(int i=0; i<9999; i++){
		if(i == this->sifre){
			kirilan_sifre = i;
			break;
		}
	}
}

void password::sifreBas()
{
	cout << kirilan_sifre;
}
int main()
{
	// kullanýcý sadece burayla ilgilenir
	// senin userid.erase(...) fonksiyonunu kullandýðýn gibi
	
	password pass1;
	pass1.sifreKir();
	pass1.sifreBas();
	cout << pass1.karakter_Sayisi << endl;
	pass1.deger_Degistir(100);
}
