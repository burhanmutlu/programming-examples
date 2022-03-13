#include <iostream>
#include <cmath>
#define x 5
#define y 5.5
#define z "burhan"
#define kare(i,j) pow(i,j)
#define topla(a,b) a+b
#define fonksiyon(a) fonk(a)
using namespace std;
int fonk(int a)
{
	return a;
}

int main()
{
	cout << x << endl;
	cout << y << endl;
	cout << z << endl;
	cout << kare(5,5) << endl;
	cout << topla(2,3) << endl;
	cout << fonksiyon(7) << endl;
}
