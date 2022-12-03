#include <iostream>
using namespace std;

class myClass {
	public:
		void myMethod() {
			cout << "merhaba";
		}
};

int main() {
	myClass obj;
	obj.myMethod();
	return 0;
}
