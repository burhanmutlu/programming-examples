#include <iostream>
using namespace std;

int* ptr()
{
	return 5;
}

int adres()
{
	return 6;
}
int main()
{
	ptr() = &adres();
	cout << ptr();
	
}
