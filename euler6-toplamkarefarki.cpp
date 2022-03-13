#include <iostream>
using namespace std;
int karelerin_tp(int a)
{
	int tp=0;
	for(int i=1; i<=a; i++){
		tp += i*i;
	}
	return tp;
}
int tp_karesi(int a)
{
	int tp=0;
	for(int i=1; i<=a; i++){
		tp += i;
	}
	return tp*tp;
}
int main()
{
	cout << tp_karesi(100) - karelerin_tp(100);
}
