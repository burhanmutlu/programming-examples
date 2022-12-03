#include <iostream>
using namespace std;
class kup{
	int sayi;
	public:
		kup(){
			sayi = 5;
		}
		friend int kup_al();
}k;

int kup_al(){
	return k.sayi*k.sayi*k.sayi;
}

int main()
{
	cout << kup_al() << endl;
	system("pause");
	return 0;
}
