#include <iostream>
#define N 5
using namespace std;

class NesneDizisi {
	int sayi;
	
	public:
		void degerAl(int x) {
			this->sayi = x;
		}
		int degerOku(){
			return this->sayi;
		}
};

int main()
{
	NesneDizisi Nesne[N];
	int i=0, k;
	while(i<N) {
		cout << i+1 << ". degeri giriniz: ";
		cin >> k;
		Nesne[i].degerAl(k);
		i++;
	}
	for(i=0; i<N; i++) {
		cout << Nesne[i].degerOku() << endl;
	}
	system("pause");
}
