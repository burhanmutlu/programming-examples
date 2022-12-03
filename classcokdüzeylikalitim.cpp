#include <iostream>
using namespace std;
// ana
class myclass {
	public:
		void myfunction() {
			cout << "ana sinif";
		}
};
// çocuk
class mychild: public myclass {
};
// torun
class mygrandchild: public mychild {
};

int main() {
	mygrandchild myobj;
	myobj.myfunction();
	return 0;
}
