#include <iostream>
#include <cmath> // tüm fonksiyonlar gelir 
// math.sqrt yapmak daha az yer kaplar çünkü sadece 
// o fonksiyonu çaðýrýrýz
using namespace std;
int main()
{
	double x = 3;
	double y = 4;
	double uzaklik = sqrt(x*x + y*y); // karekök
	cout << "nokta(" << x << "," << y << ")\n";
	cout << "uzaklik = " << uzaklik << endl;
	return 0;
}
// fonksiyonun çalýþma ortamý hakkýnda varsayýmda 
// bulunmamasý gerekir. veri giriþi main de olur.
// çünkü herkes sonuç alan bir program yazmak zorunda
// deðil. görevi o iþi yapmak

