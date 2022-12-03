#include <iostream>
#include <string>

using namespace std;

class Sayilar{
	public:
		int a,b,c;
		
		Sayilar(){
			a=1, b=4, c=15;
		}
};

int main()
{
	Sayilar sayi;
	cout << sayi.a << sayi.b << sayi.c;
}
