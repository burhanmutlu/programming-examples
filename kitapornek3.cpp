#include <iostream>
using namespace std;
int main()
{
	int sayi=8;
	char harf='c';
	void *deger;
	void (int *)x;
	
	deger = &sayi;
	cout << "sayi:" << *(int *)deger << endl;
	
	cout << sizeof(deger) << endl; // her iki boyutta aynı
	cout << sizeof((int *)deger) << endl;
	
	cout << sizeof(x) << endl;
	cout << sizeof((int)x) << endl;
	
	deger = &harf; 
	cout << "harf:" << *(char *)deger << endl;
	
	// eğer dönüşüm yapılmazsa hata verir. çünkü 
	// void boş, bir şeyi ifade etmez. *deger ya-
	//pılırsa adresi basar. dolayısı ile void bir
	// değişken oluşturulup daha sonradan ihtiyaca
	// göre bir değişkene çevirilebilir.
	system("pause"); // durmasın diye
}
