#include <iostream>
#include <string>
using namespace std;

class MyClass {
	public:
		int no;
		string isim;
};

int main() {
	MyClass obj;
	
	obj.isim = "burhan";
	obj.no = 13;
	
	cout << obj.isim << endl << obj.no;
	return 0;
}
