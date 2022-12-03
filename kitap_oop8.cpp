#include <iostream>
using namespace std;

class Test
{
	int a;
	
	public:
		Test();
		~Test();
		void Goruntule();
}x;

Test::Test(){
	cout << "yapici fonksiyon calisti" << endl;
	a=5;
}

Test::~Test(){
	cout << "gorev bitti, yok ediliyor" << endl;
}

void Test::Goruntule(){
	cout << "a degeri: " << a << endl;
}

int main()
{
	x.Goruntule();
	x.Goruntule();
}
