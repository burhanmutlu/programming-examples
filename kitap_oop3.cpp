#include <iostream>
#include <string.h>
using namespace std;

class personeller{
	char personel_adi[20], personel_soyadi[20];
	int yas;
	
	public:
		void arsiv(char *padi, char *psoyadi, int sayi){
			strcpy(personel_adi, padi);
			strcpy(personel_soyadi, psoyadi);
			yas = sayi;
		}
		void goruntule(){
			cout << "personel adi: " << personel_adi << endl;
			cout << "personel soyadi: " << personel_soyadi << endl;
			cout << "personel yasi: " << yas << endl;
		}
}pers1,pers2,pers3;

int main()
{
	pers1.arsiv("muhammed", "mastar", 22);
	pers2.arsiv("suha", "eris", 21);
	pers3.arsiv("tahir", "vural", 20);
	
	// pointer konusunu tekrar ettim
	char *ptr;
	// ptr const deðiþken oluyor -> " " gibi
	ptr = "burhan";
	cout << "& ptr : " << &ptr << endl;
	cout << "(int *)ptr: --" << (int *)ptr << endl;
	cout << "*ptr: " << *ptr << endl; // sanýrým char olduðu için tek karakter bastý
	cout << "adresin (char *) degeri:" << (char *)0x488057 << endl << endl; 
	// adresi kullanarak deðeri bastýk
	
		cout <<(char *) 0x488067 << endl;
		cout <<(char *) 0x488066 << endl;
		cout <<(char *) 0x488065 << endl;
		cout <<(char *) 0x488064 << endl;
		cout <<(char *) 0x488063 << endl;
		cout <<(char *) 0x488062 << endl;
		cout <<(char *) 0x488061 << endl;
		cout <<(char *) 0x488060 << endl;
		cout <<(char *) 0x488059 << endl;
		cout <<(char *) 0x488058 << endl;
		cout <<(char *) 0x488057 << endl;
		cout <<(char *) 0x488056 << endl;
		cout <<(char *) 0x488055 << endl;
		cout <<(char *) 0x488054 << endl;
		cout <<(char *) 0x488053 << endl;
		cout <<(char *) 0x488052 << endl;
		cout <<(char *) 0x488051 << endl;
		cout <<(char *) 0x488050 << endl;
		cout <<(char *) 0x488049 << endl;
		cout <<(char *) 0x488048 << endl;
	
	
	pers1.goruntule();
	pers2.goruntule();
	pers3.goruntule();
	system("pause");
	return 0;
}
