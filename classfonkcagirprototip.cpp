#include <iostream>
using namespace std;

class MyClass {
	public:
		void fonk();
};

void MyClass::fonk() {
	cout << "merhaba";
}

int main() {
	MyClass obj;
	obj.fonk();
	return 0;	
}
