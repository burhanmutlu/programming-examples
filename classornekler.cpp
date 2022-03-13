#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class ogrenci{
	private:
		string ad;
		int no;
	public:
		void deger_Ata(string ad, int no)
		{
			this->ad = ad;
			if(no < 0 ){
				cout << "hatali giris!" << endl;
				this->no = -1;
			}else
			this->no = no;
		}
		void deger_Bas()
		{
			cout << ad << " " << no << endl;
		}			
};






int main()
{
	/*
	Yapýsal programlamada iþler fonksiyonlarla halledilir.
	Struct yapýsý içinde fonksiyon kullanamazsýn.
	OOP ise gerçek dünyaya dönük programlamadýr.
	Bir sýnýf vardýr ve bu sýnýfýn nesnesinin özellikleri vardýr.
	Struct da bu þekilde ama bu daha geliþmiþ.
	Bazý deðerleri gizleyebiliriz.
	Sýnýf içinde fonksiyon kullanabiliriz.
	
	*/
	ogrenci ogrenci1;
	ogrenci1.deger_Ata("burhan", 252);
	ogrenci1.deger_Bas();
	ogrenci1.deger_Ata("kamil", -5);
	ogrenci1.deger_Bas();
}
