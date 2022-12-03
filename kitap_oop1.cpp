#include <iostream>
using namespace std;

class Dikdortgen{
	public:
		int kisa_kenar;
		int uzun_kenar;
		
		int alan(){
			return kisa_kenar * uzun_kenar;
		}
		int cevre(){
			return 2*(uzun_kenar + kisa_kenar);
		}
}x;

int main()
{
	cout << "kisa kenari giriniz: ";
	cin >> x.kisa_kenar;
	cout << "uzun kenari giriniz: ";
	cin >> x.uzun_kenar;
	
	cout << "dikdortgenin alani: " << x.alan() << endl;
	cout << "dikdortgenin cevresi: " << x.cevre() << endl;
	
	system("pause");
	return 0;	
}
