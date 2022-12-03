#include <iostream>
using namespace std;

void gosterici(double *);
void basvuru(double &);

int main()
{
	double x=1;
	gosterici(&x);
	cout << "gostericiden sonra: " << x << endl;
	basvuru(x);
	cout << "basvurudan sonra: " << x << endl;
	system("pause");
	return 0;	
}

void gosterici(double* a) { // gösterdiði deðeri ile hareket edioyor 
	cout << "gosterici ile cagirma!!" << endl;
	*a = 5;
}

void basvuru(double &b) { // direkt o deðiþkeni alýyor gibi
	cout << "basvuru ile cagirma !!" << endl;
	cout << b << endl;
	b = 10;
}
