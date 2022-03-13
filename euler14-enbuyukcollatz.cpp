#include <iostream>
using namespace std;
int collatz(int k)
{
	int n = 0;
	while(k != 1){
		if(k%2 == 0){
			k /= 2;
		}else{
			k = 3*k+1;
		}
		n++;
	}
	return n;
}

int main()
{
	int max = 0;
	for(int i=1000000; i>900000; i--){
		if(collatz(i) > max){
			max = collatz(i);
		}
	}
	cout << max;
}
