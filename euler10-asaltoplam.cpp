#include <iostream>
using namespace std;

int asal_testi(int a)
{
	for(int i=2; i<=a/2; i++){
		if(a%i == 0){
			return 0;
			break;
		}else 
		return 1;
	}
}
int main()
{
	long long int tp=2;
	for(int i=3; i<2000000; i++){
		if(asal_testi(i)){
			tp += i;
		}
	}
	cout <<(long) tp;
}
