#include <iostream>

using namespace std;

class yurt{
	int odaSayisi;
	string dereceTipi;
	void bilgileriGirme(int odaSayisi, string dereceTipi){
		this->odaSayisi = odaSayisi;
		this->dereceTipi = dereceTipi;
	}
};

int main()
{
	class yurt kizKalesi;
	kizKalesi.bilgileriGirme(4, "4.tip");
	
}
