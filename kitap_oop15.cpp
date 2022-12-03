#include <iostream>
#include <string>
using namespace std;

class Takim {
	string isim, mevki;
	int no;
	
	public:
		Takim(string, string, int);
		void Listele();
};

Takim::Takim(string i, string m, int n) {
	this->isim = i;
	this->mevki = m;
	this->no = n;
}

void Takim::Listele() {
	cout << "futbolcu ismi: " << this->isim << endl;
	cout << "Mevkii: " << this->mevki << endl;
	cout << "Numarasi: " << this->no << endl;
	cout << "--------------------" << endl;
}

int main()
{
	Takim Turkiye[2] = {
		Takim("volkan demirel", "kaleci", 1),
		Takim("gokhan gonul", "defans", 7)
	};
	Takim * A = Turkiye;
	for(int i=0; i<2; i++) {
		A->Listele();
		A++;
	}
	system("pause");
	return 0;	
}
