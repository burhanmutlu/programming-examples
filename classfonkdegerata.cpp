#include <iostream>
#include <string>
using namespace std;
// struct ile 
struct araba {
	string marka;
	string model;
	int yil;
	araba (string a, string b, int c){// bu c de hata verir 
		marka = a;
		model = b;
		yil = c;
	}
};
// class ile
class araba1 {
	public:
		string marka;
		string model;
		int yil;
		araba1 (string a, string b, int c){
			marka = a;
			model = b;
			yil = c;
		}
};
int main() {
	
	araba obj("honda", "civic", 2005);
	araba1 obj1("bmw", "x5", 2000);
	
	cout << obj.marka << " " << obj.model << " " << obj.yil << "\n";
	cout << obj1.marka << " " << obj1.model << " " << obj1.yil;
	
}
