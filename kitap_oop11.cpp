#include <iostream>
using namespace std;
class ornek{
	int sayi;
	public:
		friend int sayi_fonk(ornek deneme); // bu sayede sayi değerine erişebiliriz
		ornek(){
			sayi = 12;
		}
}a;
int sayi_fonk(ornek deneme){
	return a.sayi;
}
int main()
{
	cout << sayi_fonk(a) << endl;
	system("pause");
	return 0;
}
