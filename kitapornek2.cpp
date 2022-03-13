#include <iostream>
using namespace std;

double kare(double x)
{
	x *= x;
	return x;	
}

int main()
{
	double kenar;
	double (*fonk)(double); // int *n gibi ama bu fonksiyon- fonk göstericisi
	
	fonk = kare; // fonksiyon eþitlemesi yapýldý.
	cout << fonk << endl; 
	kenar=5;
	
	cout << "karenin alani:" << fonk(kenar) << "metre kare" <<  endl;
	system("PAUSE");
}
