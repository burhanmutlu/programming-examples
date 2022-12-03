#include <iostream>
using namespace std;
inline int dikdortgen(int sayi, int sayi2)
{
	return sayi*sayi2;
}
int main()
{
	int sayi, sayi2;
	cout << "kisa kenar: ";
	cin >> sayi;
	cout << "uzun kenar: ";
	cin >> sayi2;
	
	cout << "alan: " << dikdortgen(sayi, sayi2) << endl;
	system("pause");
	return 0;
}
