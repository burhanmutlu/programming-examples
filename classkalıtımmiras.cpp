#include <iostream>
#include <string>
using namespace std;
class arac { // temel sýnýf (ebeveyn) - miras alýnan sýnýf
	public:
		string brand = "ford";
		void korna() {
			cout << "Tuut, tuut! \n";
		}
};
// türetilmiþ sýnýf (çocuk) - baþka bir sýnýftan miras alan sýnýf - car
// Bir sýnýftan miras almak için : sembolü kullanýn .
class car: public arac {
	public:
		string model = "mustang";
};

int main() {
	car mycar;
	mycar.korna();
	cout << mycar.brand + " " + mycar.model;
}
