#include <iostream>
#include <string>
using namespace std;

class animal {
	public:
		void animalSound() {
			cout << "the animal makes a sound \n";
		}
		int y;
	public:
		int x;
};
// türetilmiþ
class pig: public animal {
	public:
		void animalSound() {
			cout << "the pig says: wee wee \n";
		}
};
// türetilmiþ
class dog: public animal {
	public:
		void animalSound() {
			cout << "the dog says: bow wow \n";
		}
};

int main() {
	animal myAnimal;
	pig myPig;
	dog myDog;
	
	myAnimal.animalSound();
	myPig.animalSound();
	myDog.animalSound();
	
	
	
	pig nesne;
	nesne.x = 5;
	
	
	return 0;
}
/*
Polimorfizm biyolojide, iki veya daha fazla farklý fenotipin ayný
tür popülasyonunda bulunmasýdýr. Terim kökeni bakýmýndan Yunanca
"çok" ve "biçim" kelimelerinin bir araya gelmesiyle oluþmuþtur.
Baþka bir deyiþle, birden fazla biçimin bulunmasý olarak da tanýmlanabilir.
*/
