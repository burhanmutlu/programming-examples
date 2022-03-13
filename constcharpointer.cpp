#include <iostream>
#include <string.h>
using namespace std;
void karakter(const char* metin){
	char* metin1;
	cout << &metin << endl;
	cout << &metin1 << endl;
	metin = metin1;
	cout << metin << endl;
	cout << metin1 << endl;
	//cout << *metin; // a[0] = d harfi
	cout << &metin << endl;
	cout << &metin1 << endl;
	
	
}

void karakterr(char *metin){
	metin = "burhan";
	cout << metin;
}
int main()
{
	char* metin = "hacker";
	karakter("burhan");
}
