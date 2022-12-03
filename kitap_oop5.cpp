#include <iostream>
#include <ctime>

using namespace std;

class ConstOrnek{
	public:
		mutable int sayi; // const da sayiyi deðiþtirmeye yaradý
		ConstOrnek(){ // constructor 
			sayi = 0;
		}
		
		void SayiAta(int x){
			sayi = x;
		}
		
		int dondur() const{ // deðiþmez yaptýk
			return sayi;
		}
		void SayiyiSifirla() const{ // normalde const fonksda sayi deðiþmez
			sayi = 0; // mutable sayesinde deðiþti
		}
};

int main()
{
	const ConstOrnek test;
	ConstOrnek test2;
	
	test.dondur(); // nesne ve fonk const olduðu için hata yok
//	test.SayiAta(5); // nesne const ama fonk const deðil hata!!

	test.SayiyiSifirla();
	
	test2.SayiAta(5);
	test2.dondur(); 
	cout << test2.dondur();	
	
	system("pause");
	return 0;
	
}
