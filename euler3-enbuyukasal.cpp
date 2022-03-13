#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long int sayi = 6008514;
	for(long int i=sayi/2; i>=2; i++){
		if(sayi%i==0){
			cout << i << " ";
			break;
		}
	}
}
