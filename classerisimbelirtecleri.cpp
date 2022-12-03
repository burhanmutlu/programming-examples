#include <iostream>
using namespace std;
class myclass {
	public:		// public - üyelere sýnýf dýþýndan eriþilebilir
		int x;
	private:	// private - üyelere sýnýf dýþýndan eriþilemez (veya görüntülenemez)
		int y;
};
int main() {
	
	myclass obj;
	obj.x = 25;
	//obj.y = 30;	// hata verir 
	cout << obj.x ;	
//	cout << obj.y; // hata verir
	
}
